//
//  UIFont+HYDENormalFont.h
//  HYDE114Health
//
//  Created by 李莹 on 2018/4/4.
//  Copyright © 2018年 liying. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, FontType) {
    Normal,
    Medium,
    Light,
    Bold,
};

@interface UIFont (HYDENormalFont)

+ (UIFont *)normalFontOfSize:(CGFloat)fontSize WithFontType:(FontType)fontType;

@end
