//
//  GateHomePageController.h
//  CoinTools
//
//  Created by MAC on 2020/9/10.
//  Copyright © 2020 clf. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GateHomePageController : UIViewController<UITableViewDelegate,UITableViewDataSource>
+(void)pushHomePageController;
@property(nonatomic,strong)UITableView *tableView;
@end

NS_ASSUME_NONNULL_END
