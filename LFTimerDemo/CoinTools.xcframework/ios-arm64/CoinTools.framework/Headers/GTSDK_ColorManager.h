//
//  GTSDK_ColorManager.h
//  CoinTools
//
//  Created by MAC on 2020/12/4.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>
@import SwiftTheme;
NS_ASSUME_NONNULL_BEGIN

@interface GTSDK_ColorManager : NSObject
+ (NSString *)hearTitleColor;
+ (NSString *)hydeColorBlue;
+ (NSString *)axislabelTextColor;
+ (NSString *)gateGridColor;
+ (NSString *)gateSelectColor;

+ (NSString *)gateDefaultColor;
+ (NSString *)gateWhiteColor;
+ (NSString *)gateTextLableOrangeColor;
+ (NSString *)gateTextLableBlueColor;
+ (NSString *)gateBackgroundOrangeColor;

+ (NSString *)gateBackgroundBlueColor;
+ (NSString *)gtRedColor;
+ (NSString *)gtGreeColor;
+ (NSString *)nightWhiteStrColor;
+ (UIColor *)getColorWithAlphaComponent:(UIColor *)color;
+ (BOOL)isIndividualNightMode:(BOOL)isNight;

+ (ThemeColorPicker *)main_night_black;
+ (ThemeColorPicker *)whiteAndBlack;
+ (ThemeColorPicker *)whiteAndBlack:(BOOL)isIndividualNightMode;

+ (ThemeColorPicker *)boxColor;
+ (ThemeColorPicker *)margan10Color;
+ (ThemeColorPicker *)blackAndWhite;
+ (ThemeColorPicker *)splitLineColor;
+ (ThemeColorPicker *)splitLineColor:(BOOL)isIndividualNightMode;
+ (ThemeColorPicker *)tableViewBagColor;
+ (ThemeColorPicker *)tableViewBagColor:(BOOL)isIndividualNightMode;
+ (ThemeColorPicker *)nightWhit:(UIColor * )nightColor whitWhiteColor:(UIColor * )whiteColor;
+ (ThemeColorPicker *)navBagColor;
+ (ThemeColorPicker *)pressDefaultColorColor;
+ (ThemeColorPicker *)centerLbKongBgColor;
+ (ThemeColorPicker *)centerLbDuoBgColor;
+ (ThemeColorPicker *)centerLbPingBgColor;
+ (ThemeColorPicker *)centerLbColor;
+ (ThemeColorPicker *)nightWhiteColor;
+ (ThemeColorPicker *)navNewBagColor;
+ (UIColor * )selectNightColor;
+ (ThemeColorPicker *)refreshBtColorColor;
+ (ThemeColorPicker *)refreshLbColorColor;
+ (ThemeCGColorPicker*)nightCGWhit:(UIColor *)nightCGColor;
+ (ThemeColorPicker *)nightWhitColorWith:(UIColor *)nightColor AlphaComponen:(CGFloat )component;
+ (ThemeCGColorPicker *)nightCGWhit:(UIColor *)nightCGColor colorWithAlphaComponent:(CGFloat )component;
+ (UIColor * )defultNightWhitColorWith:(UIColor *)nightColor whitWhiteColor:(UIColor * )whiteColor;
+ (ThemeColorPicker *)defultNightWhitColorWith:(UIColor *)nightColor whiteColor:(UIColor * )whiteColor;
+ (ThemeColorPicker *)whiteAndcolorWithAlphaComponent;
+ (ThemeCGColorPicker *)themRedCGColor;
+ (ThemeColorPicker *)nightWhit:(UIColor *)nightCGColor;

+ (ThemeColorPicker *)themRedColor;
+ (ThemeColorPicker *)themRedColor:(BOOL)isIndividualNightMode;
+ (ThemeColorPicker *)themGreenColor;
+ (ThemeColorPicker *)themGreenColor:(BOOL)isIndividualNightMode;
//带有透明度的红色 - 切换绿涨红跌
+ (ThemeColorPicker *)themRedColorAlpha:(CGFloat)alpha;
//带有透明度的绿色 - 切换绿涨红跌
+ (ThemeColorPicker *)themGreenColorAlpha:(CGFloat)alpha;
//按钮的背景颜色的灰色
+ (ThemeColorPicker *)buttonBackgroundGrayThemeColor;

//自定义控件颜色的灰色
+ (ThemeColorPicker *)customViewGrayThemeColor;

//索引背景颜色的灰色
+ (ThemeColorPicker *)indexGrayThemeColor;

//按钮的背景颜色的灰色
+(UIColor* )buttonBackgroundGrayColor;
//自定义控件颜色的灰色-deflout
+(UIColor* )customViewGrayColor;
//索引背景颜色的灰色
+(UIColor* )indexGrayColor;

//文字颜色的灰色
+ (ThemeColorPicker *)textGrayThemeColor;
//文字颜色的灰色
+(UIColor* )textGrayColor;
//文字颜色 黑白纯
+ (ThemeColorPicker *)textWhiteThemeColor;

//文字颜色 黑白纯
+(UIColor* )textWhiteColor;

//主题红
+(UIColor* )teRedColor;

//文字颜色 黑白纯 -小字
+ (ThemeColorPicker *)littleTextThemeColor;
+ (ThemeColorPicker *)littleTextThemeColor:(BOOL)isIndividualNightMode;
//文字颜色 黑白纯 -小字 -defult
+ (UIColor *)littleTextColor;
+ (UIColor *)littleTextColor:(BOOL)isIndividualNightMode;
//普通的白和夜间的白色 （UIColor）
+(UIColor* )ffffffColor;
//输入框 - 的默认颜色
+(UIColor* )textFieldDefaultColor;

//主题红
+ (ThemeColorPicker *)defaultThemRedColor;
//普通红
+ (UIColor *)defaultRedColor;
+ (UIColor *)defaultRedColor:(BOOL)isIndividualNightMode;
//普通绿
+ (UIColor *)defaultGreenColor;
+ (UIColor *)defaultGreenColor:(BOOL)isIndividualNightMode;

///市场情绪的 刻度尺的灰色
+(UIColor* )emotionGrayColor;
///市场情绪的 刻度尺的灰色
+ (ThemeColorPicker *)emotionThemGrayColor:(BOOL)isIndividualNightMode;

///市场情绪 - 中立的金黄色
+ (ThemeColorPicker *)emotionThemYellowColor:(BOOL)isIndividualNightMode;

+(UIColor* )titleSuspensionColor;
+ (ThemeColorPicker *)titleSuspensionThemColor;

//+(BOOL)themRedCGColor{
+ (ThemeColorPicker *)themRedNoAlphaColor;
+ (ThemeColorPicker *)themGreenNoAlphaColor;
///title 币种信息的三方来源的文字介绍
+ (ThemeColorPicker *)coinMessageLbThemColor;

///蓝色标签
+ (ThemeColorPicker *)blueTagThemColor;
+ (ThemeColorPicker *)DDDDDDAndblack;

///蓝色标签
+(UIColor* )blueTagColor;
+(UIColor* )lineGreenTagColor;

///l历史 那条虚线 绿色标签
+ (ThemeColorPicker *)lineGreenTagThemColor;
+ (ThemeCGColorPicker *)main_night_themRedCGColor;
+ (ThemeColorPicker *)main_night_whiteAndcolorWithAlphaComponent;
+ (ThemeColorPicker *)main_night_themGreenColor;
+ (ThemeColorPicker *)main_night_themRedColor;
+ (ThemeColorPicker *)main_night_themRedNoAlphaColor;
+ (ThemeColorPicker *)main_night_nightWhitColorWith:(UIColor * )nightColor AlphaComponen:(CGFloat )component;
+ (ThemeColorPicker *)main_night_textGrayThemeColor;
//文字颜色 黑白纯 -小字
+ (ThemeColorPicker *)main_night_littleTextThemeColor;
+ (ThemeColorPicker *)main_night_nightWhit:(UIColor * )nightColor whitWhiteColor:(UIColor * )whiteColor;
+ (ThemeColorPicker *)main_night_splitLineColor;
+ (ThemeColorPicker *)main_night_margan10Color;
+ (ThemeColorPicker *)main_night_nightWhiteColor;
+ (ThemeColorPicker *)main_night_titleSuspensionThemColor;
+ (ThemeColorPicker *)text999999Color;

+ (ThemeColorPicker *)main_night_text999999Color;
+ (ThemeColorPicker *)coinMessageTitleColor;
+ (ThemeColorPicker *)coinMessageContentColor;
+ (ThemeColorPicker *)main_night_coinMessageContentColor;
+ (ThemeColorPicker *)coinMessageGreenColor;
+ (ThemeColorPicker *)coinDevTextThemeColor;
///搜索框 背景颜色
+ (ThemeColorPicker *)searchBagThemeColor;
///搜索框 背景颜色
+(UIColor* )searchBagColor;
///搜索文字颜色
+ (ThemeColorPicker *)searchTextThemeColor;
///  CategoryView 选中吼的颜色金变色

+(UIColor* )categoryViewSelectBagStarColor;
+(UIColor* )categoryViewSelectBagEndColor;
+(UIColor* )categoryViewTextSelectColor;
+(UIColor* )categoryViewTextDefaultColor;
+ (ThemeColorPicker *)moreThemeColor;

+ (ThemeCGColorPicker *)timeViewShowColor;
+ (ThemeColorPicker *)get2354E6ThemeColor;
+ (ThemeCGColorPicker *)categoryViewSelectBagCGColorPicker;
+(UIColor* )get2354E6Color;
+(UIColor* )color999999;
+ (ThemeColorPicker *)themeColor999999;

//v3
+ (ThemeColorPicker *)v3_whiteThemeColor1;
+ (ThemeColorPicker *)v3_whiteThemeColor2;

+(NSArray<UIColor *> *)v3_fearLbWhiteColors;
+(UIColor *)v3_whtieColorWithAlpha:(CGFloat) alpha;

+(NSArray<UIColor *> *)v3_gradientGreenColors; //默认渐绿
+(NSArray<UIColor *> *)v3_gradientRedColors; //默认渐红

+(NSArray<UIColor *> *)v3_gradientNavigationThemeColors1; //1、极度恐慌
+(NSArray<UIColor *> *)v3_gradientNavigationThemeColors2; //2、恐慌
+(NSArray<UIColor *> *)v3_gradientNavigationThemeColors3; //3、正常
+(NSArray<UIColor *> *)v3_gradientNavigationThemeColors4; //4、贪婪
+(NSArray<UIColor *> *)v3_gradientNavigationThemeColors5; //5、极度贪婪

/**
 主题绿：白绿，黑绿
 */
+(NSArray<UIColor *> *)v3_themeGreenColors;
/**
 主题绿：白红，黑红
 */
+(NSArray<UIColor *> *)v3_themeRedColors;

+ (ThemeColorPicker *)exChangeBorder;
+ (ThemeCGColorPicker *)exChangeBorderCGColor;
+ (ThemeColorPicker *)homeBoxColor;
+ (ThemeColorPicker *)homeBoxBgColor;
+ (ThemeColorPicker *)blackAndWhite0f;
+ (ThemeColorPicker *)blackAndWhiteAlpha0f;
+ (UIColor *)teGreenColor;
+ (ThemeColorPicker *)ffffff_5F5F5F_ThemeColor;
+ (ThemeColorPicker *)color_000000_596980;
+ (ThemeColorPicker *)color_000000_596980:(BOOL)isIndividualNightMode;
+ (ThemeColorPicker *)color_fafafa_111f31;
+ (ThemeColorPicker *)color_fafafa_111f31:(BOOL)isIndividualNightMode;
///#FF0000 地球红-高亮  //00FF14地球绿-高亮
+ (ThemeColorPicker *)color_FF0000_00FF14;
///#FF0000 地球红-高亮  //00FF14地球绿-高亮
+ (ThemeColorPicker *)color_00FF14_FF0000;
+ (ThemeCGColorPicker *)themGreenCGColor ;
@end

NS_ASSUME_NONNULL_END
