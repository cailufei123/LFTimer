//
//  GateRequestManager.h
//  block-pro
//
//  Created by MAC on 2020/8/27.
//  Copyright © 2020 MAC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ResponseBlock)(NSError * _Nullable error, NSDictionary *response);
typedef void(^ResponseCacheBlock)(NSError * _Nullable error, BOOL isCache, BOOL isHaveCache, NSDictionary *response);
typedef void(^ResponseCacheBlock1)(NSError * _Nullable error, BOOL isCache, BOOL isHaveCache, NSDictionary *dict, NSDictionary *response);

@interface GateRequestManager : NSObject<NSURLConnectionDelegate>

+ (void)get:(NSString *)url  block:(ResponseBlock)block;
+ (void)post:(NSString *)url params:(NSDictionary *)params success:(void (^)(id response))success failure:(void (^)(NSError * failure))failure;
+ (void)getCache:(NSString *)url block:(ResponseCacheBlock)block;
+ (void)getCache1:(NSString *)url brouseName:(NSString *)brouseName block:(ResponseCacheBlock1)block;
+ (void)getCache:(NSString *)url time:(NSInteger)time block:(ResponseCacheBlock)block;

@end

NS_ASSUME_NONNULL_END
