//
//  GTSDK_ToolManager.h
//  CoinTools
//
//  Created by MAC on 2020/12/4.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIFont+HYDENormalFont.h"

NS_ASSUME_NONNULL_BEGIN

@interface GTSDK_ToolManager : NSObject

+(void)gtsdk_initializationWhit:(GTSDKConfig *)config;
+(void)gtsdk_refreshPage;

+ (UIColor *)gtsdkColor:(NSString *)hexString;
+ (UIColor *)gtsdkColor:(NSString *)hexString alpha:(CGFloat)alpha;

+ (UIFont *)gtsdkFont:(CGFloat )fontSize WithFontType:(FontType)fontType;
+ (UIImage *)normalImage;
+ (UIImage *)normalUserImage;
+ (UIImage *)gtsdkPlaceholderImage;
+ (UIImage *)gtsdkImage:(NSString *)imageName;
+ (UIImage *)gtsdkScaleImage:(NSString *)imageName;
+ (NSBundle *)gtsdkBundle;
+ (void)gtsdkTableRegisterNib:(UITableView *)tableView nibName:(NSString *)nibName;
+ (void)gtsdkTableRegisterHeaderFooterNib:(UITableView *)tableView nibName:(NSString *)nibName;
+ (void)gtsdkTableRegisterHeaderFooterClass:(UITableView *)tableView className:(NSString *)className;
+ (void)gtsdkTableRegisterClass:(UITableView *)tableView className:(NSString *)className;
+ (void)gtsdCollectionRegisterNib:(UICollectionView *)collectionView nibName:(NSString *)nibName;
+ (void)gtsdkCollectionRegisterClass:(UICollectionView *)collectionView className:(NSString *)className;

+ (void)gtsdkCollectionViewRegisterHeaderFooterClass:(UICollectionView *)collectionView className:(NSString *)className headerFooter:(NSString * )sectionElement;

+ (void)gtsdkCollectionViewRegisterHeaderFooterNib:(UICollectionView *)collectionView nibName:(NSString *)nibName headerFooter:(NSString * )sectionElement;
+ (NSURL *)gtsdkUrlWhitString:(NSString *)url;

+ (id)gtsdkLoadXib:(id)view;
+ (id)gtsdkLoadNibNamed:(NSString *)name;
+ (NSArray *)gtsdkLoadNibWithNamed:(NSString *)name;

+ (CGFloat)gtsdkScrWeiht;
+ (CGFloat)gtsdkScrHeiht;

+ (CGFloat)gtsdkStatusBarHeight;
+ (CGFloat)gtsdkNavBarHeight;
+ (CGFloat)gtsdkTabBarHeight;
+ (CGFloat)gtsdkTopHeight;
+ (BOOL)gtsdkIS_IPHONE_X;

+ (CGFloat)gtsdkSelectTextHeight:(NSString *)text font:(UIFont *)font;
+ (CGFloat)gtsdkSelectTextW:(NSString *)text font:(UIFont *)font;

+ (BOOL)getIsIpad;
+(UIImage *)getImageViewWhitBourseName:(NSString * )bourseName;
//获取用户的点击行为
+(NSInteger)getUserSelectModuleSubscript:(NSString *)content contenttitles:(NSArray*)contenttitles;
+(void)aleartText:(NSString *)text;
//判断字符串是不是纯数字
+ (BOOL)isPureFloat:(NSString *)string;

+(NSString *)getBourseNameWhitKey:(NSString *)key;

+(BOOL)getIsGreenUp;

+(BOOL)langEqualTo:(NSString *)lang;

+(BOOL)langEqualWork;
+ (NSString*)currentViewController;

//UIColor 转 16进制颜色值
+ (NSString *)changeUIColorToRGB:(UIColor *)color;
+(UINavigationController *)currentTabbarSelectedNavigationController;
+(BOOL)chinese_lang;
+(BOOL)chineseLangOrShortLang;
+(NSArray<UIColor *> *)fearThemeGradColorsWithFearValue:(double)fearIndex;
/** 去掉% 文字转double */
+(double)getRemovePercentDouble:(NSString *)percent;
/** 设置指定圆角 */
+ (void)setSpecifiedFillet:(UIView *)view corners:(UIRectCorner)corners radii:(CGSize)radii;
/** 缓存对象 */
+ (void)setUserDefaultsWithKey:(NSString *)key value:(id)value;
/** 取出缓存 */
+ (id)getUserDefaultsWithKey:(NSString *)key;
/** 删除缓存 */
+ (void)removeUserDefaultsWithKey:(NSString *)key;
/** 首页 - 大额挂单判断是长语言还是段语言 - 判断 */
+(BOOL)lang_home_bigorder;
/** 屏幕分享 */
+ (void)shareScreen:(UIButton * )button;
/** 根据code返回对应的色值颜色 BOOL YES红色 NO绿色 */
+(BOOL)isRedColorWhitCode:(NSString * )code;
@end

NS_ASSUME_NONNULL_END
