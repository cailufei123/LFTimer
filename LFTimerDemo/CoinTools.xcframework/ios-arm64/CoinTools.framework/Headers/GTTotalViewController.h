//
//  GTTotalViewController.h
//  CoinTools
//
//  Created by MAC on 2020/9/15.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, GTPageType) {
    GTPageTypeMain = 4,
    GTUpDown,
    GTBigType
};
NS_ASSUME_NONNULL_BEGIN

@interface GTTotalViewController : UIViewController

@property(nonatomic,strong)GTHomepage_navigationModel * homepage_navigation;//
@property(nonatomic,assign)NSInteger index;
@property(nonatomic,strong)GTSDKConfig *  shareConfig;
@property(nonatomic,strong)NSMutableArray * titleModels;
@property(nonatomic,assign)GTPageType pageType;
///  单独夜间模式
@property(nonatomic,assign)BOOL isIndividualNightMode;
@property(nonatomic,strong)NSArray * titleUrls;
@end

NS_ASSUME_NONNULL_END
