//
//  GTHomeModel.h
//  CoinTools
//
//  Created by MAC on 2020/9/19.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTHomeTitleModel : NSObject
@property(nonatomic,assign)NSInteger size;//12
@property(nonatomic,copy)NSString *content;//爆仓数据
@property(nonatomic,assign)BOOL blod;//1
@property(nonatomic,copy)NSString *color1;
@property(nonatomic,copy)NSString *color;
@property(nonatomic,copy)NSString *url;
@property(nonatomic,assign)BOOL isSelect;
@property(nonatomic,copy)NSString *name;//爆仓数据
@property(nonatomic,copy)NSArray<NSArray<NSString *> *> *data;
@property(nonatomic,copy)NSString *title;
@end

@interface GTAlldatalistModel : NSObject
@property(nonatomic,strong) NSArray<NSArray<GTHomeTitleModel*> *> *datalist;
@property(nonatomic,strong) GTHomeTitleModel * title;
@property(nonatomic,assign)BOOL  isSelect;
@property(nonatomic,copy)NSString *color;//":
@property(nonatomic,assign)BOOL isUserEnd;//":
@property(nonatomic,strong) NSString * name;
@property(nonatomic,assign) NSInteger  index;
@property(nonatomic,strong) GTAlldatalistModel *timeModel;
@end

@interface GTHomepageboxModel : NSObject
@property(nonatomic,strong) NSArray<GTAlldatalistModel *> *alldatalist;
@property(nonatomic,assign) NSInteger index;
@end

@interface GTHomevixModel : NSObject
@property(nonatomic,assign) NSInteger index;
@property(nonatomic,strong) NSArray<GTAlldatalistModel *> * alldatalist;
@end

@interface GTHomepaglistModel : NSObject
@property(nonatomic,strong) NSArray<GTAlldatalistModel *> * alldatalist;
@end

@interface GTHomepage_navigationModel : NSObject
@property(nonatomic,strong) NSArray<GTAlldatalistModel *> * alldatalist;
@end

@interface GTHomeHomepagebigtitleModel : NSObject
@property(nonatomic,strong) NSArray<GTAlldatalistModel *> * alldatalist;
@end


@interface GTHomeHomepageModel : NSObject
@property(nonatomic,strong) NSString * title;
@property(nonatomic,strong) NSString * url;
@property(nonatomic,strong) NSString * content0;
@property(nonatomic,strong) NSString * content1;
@property(nonatomic,strong) NSString * content2;
@property(nonatomic,strong) NSString * content3;
@property(nonatomic,strong) NSString * content4;
@property(nonatomic,strong) NSString * content5;
@property(nonatomic,strong) NSString * content6;
@property(nonatomic,strong) NSString * content7;
@property(nonatomic,strong) NSString * content8;
@end


@interface GTHomeModel : NSObject
@property(nonatomic,strong)GTHomevixModel * homepagevix;//恐慌
@property(nonatomic,strong)GTHomepageboxModel * homepagebox;//box
@property(nonatomic,strong)GTHomepaglistModel * homepaglist;//列表
@property(nonatomic,strong)GTHomeHomepagebigtitleModel * homepagebigtitle;//标题
@property(nonatomic,strong)GTHomepage_navigationModel * homepage_navigation;//
@property(nonatomic,strong)GTHomepage_navigationModel * homesub_navigation;//

@property(nonatomic,strong)NSArray<GTHomeTitleModel*> * home_vix_data_dtl;//恐慌
@property(nonatomic,strong)NSArray<GTHomeTitleModel*> *  homepage_new_box_dtl;//box
@property(nonatomic,strong)NSArray<GTHomeTitleModel*> *  homepage_list_all_dtl;//列表
@property(nonatomic,strong)NSArray<GTHomeTitleModel*> *  homepage_bigtitle_dtl;//标题
@property(nonatomic,assign) NSInteger isMeorEmptyAnimation;

@end

NS_ASSUME_NONNULL_END
