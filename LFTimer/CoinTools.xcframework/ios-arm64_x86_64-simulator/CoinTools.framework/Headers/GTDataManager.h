//
//  GTDataManager.h
//  CoinTools
//
//  Created by MAC on 2020/10/15.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTDataManager : NSObject
+(NSArray<GTHomeTitleModel* > *)getItemModelWhit:(NSArray *)tempArr;
+(NSString*)getLanguageData:(NSString*)titleStr;

+(NSArray*)getTitle_Brouse_ProductHeardViewData:(NSString * )patch;
+(UIImage*)getJYSimage:(NSString*)titleStr;

+(BOOL)isNewDataOldAlldatalist:(NSArray<GTAlldatalistModel *>*)oldAlldatalist newAlldatalist:(NSArray<GTAlldatalistModel *>*)newAlldatalist;

+(BOOL)isCatch:(NSString * )url;
+(void)setBarChartDataSetWhght:(id )set number:(NSInteger )number;
+(NSString*)getChineseLanguageData:(NSString*)titleStr;
+(NSMutableDictionary * )getDictionaryWhitChartData:(NSDictionary * )response;
+(NSMutableDictionary * )getDictionaryWhitListData:(NSDictionary * )response;

+(NSArray *)getNavUrls;
+(void)setcurrencyConfigBTC;
+(NSInteger)cache_Time_12H;
+(NSInteger)cache_Time_2H;
+(NSInteger)cache_Time_30M;
+(NSInteger)cache_Time_10M;
+(NSInteger)cache_Time_5M;

+(NSInteger)cache_Time_3M;
+(NSArray<NSString *> *)getDataArrWhitLastTime:(NSString *)time andGranularity:(NSString*)granularity inputFormatter:(NSString *)inputFormatter timeCount:(NSInteger)count;
// yyyy-MM-dd HH:mm:ss
+(NSArray<NSString *> *)getPrecisionMinuteArrWhitLastTime:(NSString *)time andGranularity:(NSString*)granularity;
// yyyy-MM-dd
+(NSArray<NSString *> *)getPrecisionDayArrWhitLastTime:(NSString *)time andGranularity:(NSString*)granularity;
+(NSArray<NSString *> *)getDataArrWhitFristTime:(NSString *)time andGranularity:(NSString*)granularity inputFormatter:(NSString *)inputFormatter timeCount:(NSInteger)count;


//平台筛选 平台数据
+(NSMutableArray<GatePublicSelectModel *> *)getExchangeDatas:(NSArray<NSArray *> * )exchangeDatas exchangeName:(NSString * )exchangeName;
+(NSMutableArray<GatePublicSelectModel *> *)getExchangeContractDatas:(NSArray<NSArray *> * )exchangeDatas contractName:(NSString * )contractkey;
//t通过平台 获取产品 数组
+(NSMutableArray<GatePublicSelectModel *> *)getExchangeContractDatas:(NSArray<NSArray *> * )contractDatas contractName:(NSString * )contractkey  exchangeName:(NSString *)exchangeName exchangeIndex:(NSInteger )exchangeIndex;
+(NSString * )getContractlang:(NSString *)_name;
+(NSInteger)getExchangeIndex:(NSString *)exchangeName exchangeDatas:(NSArray<NSArray *> * )exchangeDatas;
+(NSMutableDictionary * )getDictionaryWhitChartData1:(NSDictionary * )response;
+(NSMutableDictionary * )getDictionaryWhitChartData2:(NSDictionary * )response;
@end

NS_ASSUME_NONNULL_END

