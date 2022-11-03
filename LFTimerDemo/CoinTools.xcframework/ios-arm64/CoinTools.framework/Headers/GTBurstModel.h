//
//  GTBurstModel.h
//  CoinTools
//
//  Created by MAC on 2020/9/19.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface GTPublicContentModel : NSObject
@property(nonatomic,strong) NSArray<GTHomeTitleModel *> *data;
@property(nonatomic,strong) NSArray<GTAlldatalistModel *> *alldatalist;
@property(nonatomic,copy) NSString * title;
@property(nonatomic,copy) NSString * productType;
@property(nonatomic,assign) BOOL  isSelected;
@property(nonatomic,copy) NSString * v_coin_type;
@property(nonatomic,strong) NSArray<GatePublicSelectModel *> * publicSelectModels;
@property(nonatomic,strong) NSArray<GatePublicSelectModel *> * organPublicSelectModels;
@property(nonatomic,assign) NSInteger index;
@property(nonatomic,assign) BOOL  isFalseCache;
@property(nonatomic,strong) GTPublicContentModel * UModel;
@property(nonatomic,strong) GTPublicContentModel * BModel;
@property(nonatomic,strong) NSString *   colorStr;
@property(nonatomic,strong) NSArray  * times;

@end


@interface GTBurstModel : NSObject
@property(nonatomic,strong)GTPublicContentModel * burstbigtitle;
@property(nonatomic,strong)GTPublicContentModel * burstbourse;
@property(nonatomic,strong)GTPublicContentModel * burstcoin;
@property(nonatomic,strong)GTPublicContentModel * burstinfo;
@property(nonatomic,strong)GTPublicContentModel * burstdtl;
@property(nonatomic,strong)GTPublicContentModel * burstcalpic;
@property(nonatomic,strong)GTPublicContentModel * burstfuture;
@property(nonatomic,strong)GTPublicContentModel * bursttop;
@end

@interface GTRateModel : NSObject
@property(nonatomic,assign) BOOL  isSelected;//这model是否被选中


@property(nonatomic,strong) GTAlldatalistModel * UModel;
@property(nonatomic,strong) GTAlldatalistModel * BModel;
@property(nonatomic,strong) GTAlldatalistModel * timeModel;
@property(nonatomic,strong)GTPublicContentModel * publicContentModel;
@property(nonatomic,assign) NSInteger   index;

@property(nonatomic,strong) NSString * colorStr;
@property(nonatomic,strong) NSString * name;

@property(nonatomic,assign) BOOL isSelectB;//是否选中B
@property(nonatomic,assign) BOOL isSelectU;//是否选中U
@property(nonatomic,assign) BOOL enabledB;//是否能选中B
@property(nonatomic,assign) BOOL enabledU;//是否能选中U
@property(nonatomic,strong) NSString * colorB;
@property(nonatomic,strong) NSString * colorU;
@property(nonatomic,assign) BOOL isLoding;//这model是否在正在加载
@property(nonatomic,assign) BOOL isSelect;//这model是否被选中
@end

@interface GTRangeModel : NSObject
@property(nonatomic,assign) BOOL  isSelected;
@property(nonatomic,strong)GTHomeTitleModel * homeTitleModel;
@property(nonatomic,strong)GTHomeTitleModel * titleModel;
@property(nonatomic,strong) NSString * name;
@property(nonatomic,strong) NSString * number;
@property(nonatomic,strong) NSString * key;
@property(nonatomic,assign) BOOL  isloading;
@end
//涨跌分布
@interface GTUPDOWNModel : NSObject
@property(nonatomic,strong)GTPublicContentModel * bigtitle;
@property(nonatomic,strong)GTPublicContentModel * history;
@property(nonatomic,strong)GTPublicContentModel * updowncoinData;
@property(nonatomic,strong)GTPublicContentModel * historyList;
@property(nonatomic,strong)GTPublicContentModel * time;
@end

NS_ASSUME_NONNULL_END

