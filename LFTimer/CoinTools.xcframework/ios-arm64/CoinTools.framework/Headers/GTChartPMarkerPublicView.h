//
//  GTChartPMarkerPublicView.h
//  CoinTools
//
//  Created by 蔡路飞 on 2020/10/11.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GatePublicSelectModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface GTChartPMarkerPublicView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView * tableView;
@property(nonatomic,strong)NSArray * publicSelectModels;
@property(nonatomic,strong)UIView * publicv;
@property(nonatomic,strong)UIImageView * bgImageV;
@property(nonatomic,assign)BOOL  isMainNeight;
@end

NS_ASSUME_NONNULL_END
