//
//  GateBaseViewController.h
//  block-pro
//
//  Created by MAC on 2020/8/31.
//  Copyright © 2020 MAC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GTBaseTableView.h"
#import "LFScrollProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@class GateTopSelectView;
@class GTMenuSelectView;
@class zhPopupController;

@interface GateBaseViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) GTBaseTableView *tableView;
@property (nonatomic, strong) GateTopSelectView *topSelectView;
@property (nonatomic, strong) GTMenuSelectView *curtainView;
@property (nonatomic, strong) UIButton *claseBt;
@property (nonatomic, strong) zhPopupController *popupController;

@property (nonatomic, assign) NSInteger selectedIndex;
@property (nonatomic, assign) NSInteger index;
@property (nonatomic, assign) BOOL isError;
-(void)selectitemOrindex:(NSInteger )index string:(NSString *)title;
@property (nonatomic, strong) NSArray *titles;
@property(nonatomic,assign)NSInteger  setSelectedIndex;
-(void)loadTitleData;
@property (nonatomic, copy)  NSString * v_module_type;
@property (nonatomic, copy)  NSString * coin_type;
@property (nonatomic, copy)  NSString * time_type;
-(void)loadPicexModule;
@property (nonatomic, copy) void(^picexModuleBlock)(id  picexModuleModel);
@property (nonatomic, copy) NSString * bigOrderClanarBrouseName;//30日爆仓统计 交易所name
@property (nonatomic, copy) NSString * bigOrderClanarBrousePName;//30日爆仓统计 交易所name
@property (nonatomic, copy) NSString * exchangeName;//记录交易被点击的-交易所的名字
@property (nonatomic, copy) NSString * exchangeKey;//记录交易被点击的-交易所的Key
@property (nonatomic, copy) NSString * contractName;//记录交易合约被点击的-交易所的名字
@property (nonatomic, copy) NSString * contractKey;//记录交易合约被点击的-交易所的Key
@property(nonatomic,assign)CGFloat  exchangeContractHeight;
@property(nonatomic,strong)id   shareConfig;
-(void)shareAction:(NSInteger)index;
@property (nonatomic, assign) BOOL isFinish;
@property(nonatomic,strong)dispatch_group_t group;
@property (nonatomic, strong)  UIView * button;
@property (nonatomic, strong)  UIView * topView;
-(void)claseBtAction:(UIButton * )claseBt;
@property(nonatomic,assign)NSInteger section;
@property (nonatomic, copy) void(^selectCionTypeBlock)(NSInteger section,NSInteger idnex,NSString * name);
@property (nonatomic, copy) void(^hidenTopView)(void);
-(id)getNavigateIconTypeModel;
@property(nonatomic,strong)NSMutableArray * titleModels;
@property(nonatomic,copy)NSString * navUrl;
//@property(nonatomic,assign)NSInteger selectindex;
@property(nonatomic,assign)NSInteger totalSelectIndex;
@property(nonatomic,strong)NSString * cs;
@property (nonatomic, assign) BOOL isEarth;
@property (nonatomic, strong)  id  topCategoryTitleView;
///通用
@property (nonatomic, assign) BOOL isChartline;
@property(nonatomic,strong)NSString * firstPicTime;
@property(nonatomic,strong)NSString * secondPicTime;
@property(nonatomic,strong)NSString * thirdPicTime;
@property (nonatomic, assign) BOOL stopLoding0;
@property (nonatomic, assign) BOOL stopLoding1;
@property (nonatomic, assign) BOOL stopLoding2;
@property (nonatomic, assign) BOOL stopLoding3;
@property (nonatomic, assign) BOOL stopLoding4;
@property (nonatomic, assign) BOOL stopLoding5;
@property (nonatomic, assign) BOOL stopLoding6;
@property (nonatomic, weak) id<LFScrollProtocol> scrollDelegate;//滚动视图滑动代理
-(void)createTable1;
@property(nonatomic,strong)NSString * className;
-(void)refreshData;
@property (nonatomic, assign) BOOL isWaitRefresh;
-(void)showSearch;
///tableView  的滚动偏移量
@property (nonatomic, copy) void(^sdkScrollViewDidScroll)(CGFloat contentOffsetY,UITableView * scrollView,GateBaseViewController * vc);
///  币种类型  默认BCT
@property(nonatomic,copy)NSString* coinType;
/////  币种的链接
//@property(nonatomic,copy)NSString* coinUrl;
///  单独夜间模式
@property(nonatomic,assign)BOOL isIndividualNightMode;
///  scrollview  是否可以滑动
@property(nonatomic,assign)BOOL  sdkScrollEnabled;

-(void)skipBigData:(NSString * )url;

@property(nonatomic,strong)UINavigationController * main_Nav;
@end


NS_ASSUME_NONNULL_END

