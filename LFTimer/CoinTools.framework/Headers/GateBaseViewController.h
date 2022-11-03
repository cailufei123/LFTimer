//
//  GateBaseViewController.h
//  block-pro
//
//  Created by MAC on 2020/8/31.
//  Copyright © 2020 MAC. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GateBaseViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,assign)NSInteger  selectedIndex;
@property(nonatomic,assign)NSInteger  index;
@property (nonatomic, assign) BOOL isError;
-(void)selectitemOrindex:(NSInteger )index string:(NSString *)title;
@property (nonatomic, strong) NSArray *titles;
@end

NS_ASSUME_NONNULL_END
