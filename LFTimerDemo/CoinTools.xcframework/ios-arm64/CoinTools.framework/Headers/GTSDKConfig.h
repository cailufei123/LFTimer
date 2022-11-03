//
//  GTSDKConfig.h
//  CoinTools
//
//  Created by MAC on 2020/12/9.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol GateFuncProtocol <NSObject>

///SDK 分享回调 参数 image 需要分享的图片 ，sourceView 分享图片视图 pad 适配使用
- (void)sdkShareScreenShoot:(UIImage *)image withSourceView:(UIView *)sourceView;

@end
@interface GTSDKConfig : NSObject
///语言英文简称
@property(nonatomic,copy) NSString *language;
///是和否是夜间模式
@property(nonatomic,assign) BOOL isNightMode;
///是否绿涨
@property(nonatomic,assign) BOOL isGreenUp;
///创建GTSDKConfig
//-(GTSDKConfig * )createConfigWhit:(NSString *)language isNightMode:(BOOL)isNightMode;

///func delegate
@property(nonatomic,assign) id<GateFuncProtocol> delegate;
//block func
@property (copy) void(^takeScreenShoot)(UIImage* image, UIView *sourceView);
@property (copy) void(^skipTransactionPage)(NSString* currency,NSString* exchange);
///额外
/// 传入的数据参数
///
///合约  或者 现货， 默认是合约
@property(nonatomic,assign)BOOL  isSpot;

///币种的链接
@property(nonatomic,copy)NSString *coinUrl;

//币种类型，默认BCT
@property(nonatomic,copy)NSString *currency;
//币种类型，默认USDT
@property(nonatomic,copy)NSString *exchange;

@property(nonatomic,strong)NSString *className;
//是否可以滑动
@property(nonatomic,assign)BOOL sdkScrollEnabled;

@property(nonatomic,strong)NSArray * existingLanguageArr;
+ (GTSDKConfig *)getSDKConfig;
- (NSString *)getCurrency;
- (NSString *)getExchange;

@end

NS_ASSUME_NONNULL_END
