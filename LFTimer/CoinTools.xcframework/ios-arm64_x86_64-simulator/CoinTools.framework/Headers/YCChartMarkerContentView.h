//
//  YCChartMarkerContentView.h
//  CoinTools
//
//  Created by 余成国 on 2021/11/25.
//  Copyright © 2021 成都弓木科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/** 标记类型 */
typedef NS_ENUM(NSInteger, YCChartMarkerType) {
    /** 交易对涨跌日历 */
    YCChartMarkerTypeTradePair = 0,
};

@interface YCChartMarkerContentView : UIView

@property (weak, nonatomic) IBOutlet UIView *baseView;
@property (weak, nonatomic) IBOutlet UIImageView *bgView;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

/** 图表视图 */
@property (nonatomic, strong, nullable) ChartViewBase *chartView;
/** 高亮数据 */
@property (nonatomic, strong) ChartHighlight *highlight;

/** 是否固定夜间模式 */
@property (nonatomic, assign) BOOL isIndividualNightMode;
/** 标记类型 */
@property (nonatomic, assign) YCChartMarkerType markerType;
/** 对应类型的数据 */
@property (nonatomic, strong) id data;
/** 内容大小，外部获取 */
@property (nonatomic, assign, readonly) CGSize contentSize;

/** 初始化 */
+ (instancetype)chartMarkerContentView;

/** 删除定时器 */
- (void)removeTimer;

@end

NS_ASSUME_NONNULL_END
