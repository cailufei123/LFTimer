//
//  GTSDK_Main_NewCoinMessageViewController.h
//  CoinTools
//
//  Created by MAC on 2021/8/19.
//  Copyright © 2021 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTSDK_Main_NewCoinMessageViewController : GateBaseViewController
+(GTSDK_Main_NewCoinMessageViewController *)gtsdk_GTSDK_Main_CoinMessageVc;
///  币种的链接
@property(nonatomic,copy)NSString* coinUrl;
@end

NS_ASSUME_NONNULL_END
