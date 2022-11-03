//
//  GateHomePageController.h
//  CoinTools
//
//  Created by MAC on 2020/9/10.
//  Copyright © 2020 clf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GTSDKConfig.h"
#import "GTSDKBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

static GTSDKConfig *shareConfig;

@interface GateHomePageController : GTSDKBaseViewController <UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;

/** 获取导航控制器 */
+ (UINavigationController *)gtsdk_getNc;
/** 获取首页控制 */
+ (GateHomePageController *)gtsdk_getGatePageController;

@end

NS_ASSUME_NONNULL_END
