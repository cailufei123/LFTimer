//
//  UIFont+FontName.h
//  CoinTools
//
//  Created by jishu on 2022/9/23.
//  Copyright © 2022 成都弓木科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIFont (FontName)

+ (UIFont *)normalFontWithSize: (CGFloat)size;

+ (UIFont *)boldFontWithSize: (CGFloat)size;

@end

NS_ASSUME_NONNULL_END
