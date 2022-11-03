//
//  GTLayoutDirectionManager.h
//  CoinTools
//
//  Created by jishu on 2021/11/23.
//  Copyright © 2021 成都弓木科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTLayoutDirectionManager : NSObject
@property (nonatomic, assign, class) BOOL ISRTL;
+ (void)configureRTL;
@end


@interface UIImage (Rtl)
- (UIImage *)rtlImage;
@end

@interface UIView (Rtl)
- (void)resetFrameToFitRTL:(CGFloat)superWidth;
@end

NS_ASSUME_NONNULL_END
