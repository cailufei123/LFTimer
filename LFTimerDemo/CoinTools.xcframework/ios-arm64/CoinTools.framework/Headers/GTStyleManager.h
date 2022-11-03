//
//  GTStyleManager.h
//  CoinTools
//
//  Created by MAC on 2020/10/12.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>


//NS_ASSUME_NONNULL_BEGIN

@interface GTStyleManager : NSObject
//+(void)setStyleWhit:(GTHomeTitleModel *)homeTitleModel forLale:(UILabel *)contentLb;
+(UIColor *)setStyleWhit:(GTHomeTitleModel *)homeTitleModel forLale:(UILabel *)contentLb;
+(void)loadingImage;
+(UIImage *)selecrDotStyle:(UIColor * )color ;
+(UIView * )getChartPMarkerViewWhit;
+ (UIImage*) imageToTransparent:(UIImage*) image;
+(UIColor *)setMain_StyleWhit:(GTHomeTitleModel *)homeTitleModel forLale:(UILabel *)contentLb;

@end

//NS_ASSUME_NONNULL_END
