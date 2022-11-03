//
//  GTScreenBt.h
//  CoinTools
//
//  Created by MAC on 2020/11/5.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTScreenBt : UIButton
@property (nonatomic, copy) void(^selectBlock) (BOOL select);
@property (nonatomic, assign) BOOL isChart;
@end

NS_ASSUME_NONNULL_END
