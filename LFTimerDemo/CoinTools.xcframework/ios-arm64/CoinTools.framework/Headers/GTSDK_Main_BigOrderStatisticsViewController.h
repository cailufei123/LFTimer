//
//  GTSDK_Main_BigOrderStatisticsViewController.h
//  CoinTools
//
//  Created by MAC on 2021/7/13.
//  Copyright © 2021 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
static GTSDKConfig *  dataConfig;
@interface GTSDK_Main_BigOrderStatisticsViewController : GateBaseViewController
///获取首页控制
+(GTSDK_Main_BigOrderStatisticsViewController *)gtsdk_getGTSDK_Main_BigOrderStatisticsVc;
-(void)refreshData;
@end

NS_ASSUME_NONNULL_END
