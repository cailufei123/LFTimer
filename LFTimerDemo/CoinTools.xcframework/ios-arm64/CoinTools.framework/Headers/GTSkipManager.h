//
//  GTSkipManager.h
//  CoinTools
//
//  Created by MAC on 2021/8/31.
//  Copyright © 2021 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, GTSkipPageType) {
    v1_burst= 4,
    v1_contract,
    v1_ratio,
    v1_bigorder,
    v1_holdcoin,
    v1_trans,
    v1_fundflow,
    v1_rate,
    v1_order,
    v1_c2c,
    v1_more,
    v1_trust,
    v1_quota,
    v1_gatelist,
    v1_deposit
    
};
@interface GTSkipManager : NSObject
+(void)skipVcWhit:(UIViewController * )vc anUrl:(NSString *)url andTitle:(NSString *)title suspendBtn:(UIView *)suspendBtn;
+(void)skipTotalVc:(UIViewController * )vc anUrl:(NSString *)url navTitle:(NSString *)navTitle;

@property(nonatomic,assign)GTSkipPageType pageType;
+(NSMutableArray<GTHomeTitleModel *> * )getCategorysourceWhit:(GTSkipPageType)pageType;
///设置 嵌套也页面的加载币种的 参数
+(void)setTotalInsetControllerLoadCionParameterWhiht:(GateBaseViewController *)baseVc pageType:(GTSkipPageType)pageType  dataItemModel:(GTHomeTitleModel *)dataItemMode initListForIndex:(NSInteger)index;
+(void)addControllerListWhit:(NSMutableArray *)controllerList andIndex:(NSInteger)index pageType:(GTSkipPageType)pageType;
@end

NS_ASSUME_NONNULL_END
