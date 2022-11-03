//
//  GTSDK_URLManager.h
//  CoinTools
//
//  Created by MAC on 2020/12/4.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTSDK_URLManager : NSObject

//gate榜单
+ (NSString *)rank_url_v3;
+ (NSString *)rank_url_v2WithType:(NSString *)path;

+ (NSString *)depositAllDataWithCoin:(NSString *)coin;

+ (NSString *)depositBigTitle;
+ (NSString *)depositUpdateTime;
+ (NSString *)depositCoins;
+ (NSString *)depositChains:(NSString *)coinType;
+ (NSString *)depositExchanges:(NSString *)coinType;
+ (NSString *)depositTBData:(NSString *)coinType;
+ (NSString *)depositCBData:(NSString *)coinType;
+ (NSString *)depositPauseCB:(NSString *)coinType;
+ (NSString *)depositPauseTB:(NSString *)coinType;

//首页
+(NSString * )homePageUrl;
+(NSString * )homeNavUrl;
+(NSString * )homeBoxUrl;
+(NSString * )homeVixUrl;
+(NSString * )homeListUrl;
+(NSString * )homeMoreListUrl;
+(NSString * )homeNewBoxUrl;

//爆仓
+(NSString * )baoCigtitleUrl;
+(NSString * )baoInfoUrl:(NSString *)v_coin_type;
+(NSString * )baoCalUrl:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name produce:(NSString *)produce;
+(NSString * )baoBourseUrl:(NSString *)v_coin_type v_time_type:(NSString * )v_time_type ;
+(NSString * )baoCoinUrl:(NSString *)v_coin_type v_time_type:(NSString * )v_time_type ;
+(NSString * )baoDtlUrl:(NSString *)v_coin_type;

// 持仓
+(NSString * )chiBigtitleUrl;
+(NSString * )chiDtlUrl:(NSString *)v_coin_type ;
+(NSString * )chiDtlCoin_typeUrl:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce;


// 多空
+(NSString * )duokongBigtitleUrl;
+(NSString * )duokongTsUrl:(NSString *)v_coin_type v_time_type:(NSString * )v_time_type ;
+(NSString * )duokongExUrl:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce ;

//大单
+(NSString * ) bigOrderBigtitleUrl;
+(NSString * )bigOrderCoin_typeUrl:(NSString *)v_coin_type ;
+(NSString * )bigOrderExUrl:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name produce:(NSString * )produce;
+(NSString * )bigOrderUrl:(NSString *)v_coin_type v_time_type:(NSString * )v_time_type ;
+(NSString * )bigOrderExTsUrl:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce ;
+(NSString * )bigOrderListUrl:(NSString *)v_coin_type ;


//大单  大单成交(合约、现货)   <v_contra_spot> = contra 为合约   spot 为现货
+(NSString * ) bigOrderBigtitleCsUrl;
+(NSString * )bigOrderCoin_typeCsUrl:(NSString *)v_coin_type cs:(NSString *)cs;

+(NSString * )bigOrderExCsUrl:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name produce:(NSString * )produce cs:(NSString *)cs;

+(NSString * )bigOrderCsUrl:(NSString *)v_coin_type v_time_type:(NSString * )v_time_type cs:(NSString *)cs;

+(NSString * )bigOrderExTsCsUrl:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce cs:(NSString *)cs;
+(NSString * )bigOrderListCsUrl:(NSString *)v_coin_type cs:(NSString *)cs;

//币种<v_type> 为 big,burst,contract,hold,ls
//持币
+(NSString * )navigate_v_coin_typeCsUrl:(NSString *)v_coin_type cs:(NSString *)cs;

//持币
+(NSString * )holeCoinUrl;
+(NSString * )holeCoinDistpicUrl:(NSString *)v_coin_type ;
+(NSString * )holeCoinDistdtlUrl:(NSString *)v_coin_type ;
+(NSString * )holeCoinTransUrl:(NSString *)v_coin_type ;
//持币趋势变化
+(NSString * )trendCoin_typeUrl:(NSString *)v_coin_type;

//持币
+(NSString * ) vixBigtitleUrl;
+(NSString * )vixDtlUrl;
+(NSString * )vixTsUrl:(NSString *)v_time_type ;

//#币种<v_type> 为 big,burst,contract,hold,ls
// 持币
+(NSString * )navigate_v_coin_typeUrl:(NSString *)v_coin_type;
///# 图形交易所选择
+(NSString * )picexModuleUrl:(NSString *)v_module_type coin_type:(NSString *)coin_type v_time_type:(NSString *)v_time_type;

+(NSString * )burstTopUrl:(NSString *)v_coin_type v_time_type:(NSString * )v_time_type ;

//灰度明细
+(NSString * )grayscaleTrustUrl;
//灰度持仓成本
+(NSString * )grayscaleHoldUrl:(NSString *)v_coin_type;
//灰度持仓变化
+(NSString * )grayscaleeChangeUrl:(NSString *)v_coin_type;
//灰度持仓变化
+(NSString * )grayscaleBigtitleUrl;
//灰度v3
+(NSString * )ratePicUrl_v3:(NSString *)v_coin_type ;
///资金费率
+(NSString * )ratePicUrl:(NSString *)v_coin_type  v_time_type:(NSString * )v_time_type v_ex_name:(NSString * )v_ex_name;
+(NSString * )rateModuleUrl:(NSString *)v_coin_type  v_time_type:(NSString * )v_time_type;
+(NSString * )rateBigtitleUrl;

/**
 *  涨跌分布交易对
 *  @param bourse 交易所平台
 *  @param coin 交易币种
 */
+ (NSString *)tradePairUrlWithBourse:(NSString *)bourse coin:(NSString *)coin;

/**
 *  涨跌分布交易对明细
 *  @param ratio 涨跌比例范围
 *  @param bourse 交易所平台
 *  @param coin 交易币种
 *  @param page 页码
 */
+ (NSString *)tradePairDetailUrlWithRatio:(NSString *)ratio bourse:(NSString *)bourse coin:(NSString *)coin page:(NSInteger)page;

//挂单日历
+(NSString * )orderCalv_coin_type:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_contract_type:(NSString * )v_contract_type;
//挂单对比
+(NSString * )orderContraUrlCoin_type:(NSString *)v_coin_type v_ex_name:(NSString *)v_ex_name v_contract_type:(NSString *)v_contract_type;
//挂单大标题
+(NSString * )orderBigtitleUrl;

//挂单日历
+(NSString * )orderCalv_coin_type:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_contract_type:(NSString * )v_contract_type cs:(NSString *)cs;
//挂单对比
+(NSString * )orderContraUrlCoin_type:(NSString *)v_coin_type v_ex_name:(NSString *)v_ex_name v_contract_type:(NSString *)v_contract_type cs:(NSString *)cs;

//挂单大标题
+(NSString * )orderdtlUrlv_ex_name:(NSString * )v_ex_name  page:(NSString * )page limit:(NSString * )limit cs:(NSString *)cs;
+(NSString * )orderdtlUrlv_ex_name:(NSString * )v_ex_name  page:(NSString * )page limit:(NSString * )limit;

//涨跌分布币种
+ (NSString *)contractDataUrlWithCoinType:(NSString *)coinType year:(NSString *)year;
//涨跌分布币种年份选择列表
+ (NSString *)contractDataYearUrlWithCoinType:(NSString *)coinType;
//涨跌分布概念版块
+ (NSString *)conceptPlateUrl;
//概念版块详情
+ (NSString *)conceptPlateDetailUrlWithPlateName:(NSString *)plateName;

//数据监控 - 监控明细小标题
+(NSString * )monitorSmtitle;

///大额转账大标题
+(NSString * )tranBigtitleUrl;
///大额转账 - 转账明细|转账分布
+(NSString * )tranDtlCoin_typeUrl:(NSString *)v_coin_type;
///大额转账 - 转账日历
+(NSString * )tranCalCoin_typeUrl:(NSString *)v_coin_type;
///大额转账 - v3接口
+(NSString * )tranCalCoin_typeUrl_v3:(NSString *)v_coin_type;

///币种信息 - 大标题
+(NSString * )coin_DtlCoin_typeUrl;

///币种信息 - 基本信息
+(NSString * )coin_dtl_Coin_typeUrl:(NSString *)v_coin_type;

///币种信息 - 相关链接信息
+(NSString * )coin_web_Coin_typeUrl:(NSString *)v_coin_type;
///币种信息 - 挖矿数据信息
+(NSString * )coin_min_Coin_typeUrl:(NSString *)v_coin_type;
///币种信息 - 历史数据信息
+(NSString * )coin_his_Coin_typeUrl:(NSString *)v_coin_type;
///发展历程与路线信息
+(NSString * )coin_dev_Coin_typeUrl:(NSString *)v_coin_type;

///十八：C2C信息此处开始使用V2BigtitleUrl;
+(NSString * )c2cBigtitleUrl;
//C2C 图标
+(NSString * )c2cPicUrl:(NSString *)v_coin_type ts:(NSString *)ts ex:(NSString *)ex;
+(NSString * )c2cUrl_v3:(NSString *)v_coin_type v_time_type:(NSString * )v_time_type ex:(NSString *)ex;
//C2C 列表
+(NSString * )c2cDtlUrl:(NSString *)v_coin_type;
//V2版本合并大数据首页一级和二级标题
+(NSString * )homeNavV2Url;
//资金流向
+(NSString * )fundCoin_typecUrl_V3:(NSString *)v_coin_type v_time_type:(NSString * )v_time_type cs:(NSString *)cs;

//大额转账
+(NSString * )tranCoin_typecUrl_V3:(NSString *)v_coin_type;
//币种信息
+(NSString * )coinMessage_Coin_typecUrl_V3:(NSString *)v_coin_type;
//持币
+(NSString * )cash_coin_typeUrl_V3:(NSString *)v_coin_type ;

//爆仓V3版本
+(NSString * )burstUrl_V3:(NSString *)v_coin_type ts:(NSString *)ts ex:(NSString *)ex cy:(NSString *)cy;

//图形交易所选择 V2版本
+(NSString * )picexModuleUrl_V2:(NSString *)v_module_type coin_type:(NSString *)coin_type v_time_type:(NSString *)v_time_type;

//持仓V3版本
+(NSString * )holdUrl_V3:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce ;
+(NSString * )holdPic_Url_V2:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce ;

//多空
//多空
//没有charts的V3
+(NSString * )duokongAll_url_v3:(NSString *)v_coin_type  v_time_type:(NSString * )v_time_type;
//有charts的V3
+(NSString * )duokongLs_url_v3:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce ;
//多空-V2版本
+(NSString * )duokongPic_url_v2:(NSString *)v_coin_type v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce ;

//v2 - v3 大单成交
//v3 大单成交
+(NSString * )allbigdeal_url_v3:(NSString *)v_coin_type cs:(NSString * )cs v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce;
//交易所统计
+(NSString * )allbigdeal_total_url_v2:(NSString *)v_coin_type cs:(NSString * )cs  v_time_type:(NSString * )v_time_type;
//日历图
+(NSString * )allbigdeal_infopic_url_v2:(NSString *)v_coin_type  cs:(NSString * )cs v_ex_name:(NSString * )v_ex_name  produce:(NSString * )produce;

//大单分布图
+(NSString * )allbigdeal_distpic_url_v2:(NSString *)v_coin_type  cs:(NSString * )cs v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type produce:(NSString * )produce ;

//资金费率 v3
+(NSString * )rate_url_v3:(NSString *)v_coin_type  v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type;

//资金费率 v2 资金费率图形
+(NSString * )rate_url_v2:(NSString *)v_coin_type  v_ex_name:(NSString * )v_ex_name v_time_type:(NSString * )v_time_type;
//v3 首页
+(NSString * )home_url_v3;
//v2 首页 主流币行情 分页 1页20
+(NSString * )home_url_v3:(NSInteger)limit;

// v3 所有信息 挂单对比包含6个ex数据 合约默认是永续
+(NSString * )bigOrder_url_v3:(NSString *)v_coin_type cs:(NSString * )cs  v_ex_name:(NSString * )v_ex_name  produce:(NSString * )produce;
//v2 挂单日历
+(NSString * )bigOrder_cal_url_v2:(NSString *)v_coin_type cs:(NSString * )cs  v_ex_name:(NSString * )v_ex_name  produce:(NSString * )produce;
//v2 挂单对比
+(NSString * )bigOrder_comparison_url_v2:(NSString *)v_coin_type cs:(NSString * )cs  v_ex_name:(NSString * )v_ex_name  produce:(NSString * )produce;
//v2 挂单明细  每页50条数据
+(NSString * )bigOrder_dtl_url_v2:(NSString *)v_coin_type cs:(NSString * )cs  limit:(NSInteger)limit;
//v2 恐慌指数图
+(NSString * )vix_url_v2_v_time_type:(NSString * )v_time_type;
//v2 行情趋势
+(NSString * )quota_url_v3_coin_type:(NSString * )coin_type cs:(NSString * )cs time_type:(NSString *)time_type;
@end

NS_ASSUME_NONNULL_END
