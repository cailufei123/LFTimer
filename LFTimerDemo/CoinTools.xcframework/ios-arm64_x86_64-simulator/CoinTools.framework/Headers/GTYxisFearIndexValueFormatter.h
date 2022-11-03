//
//  GTXYxisFearIndexValueFormatter.h
//  CoinTools
//
//  Created by MAC on 2020/9/21.
//  Copyright © 2020 蔡路飞. All rights reserved.
//
typedef NS_ENUM(NSInteger, GTFormatterYType) {
   GTFormatterYRightDuoKong = 3,
    GTFormatterYLeftAxisDuoKong,
    GTFormatterYLeftAxisKongHuang,
    GTFormatterYRightKongHuang,
    GTFormatterYLeftAxisChiCang,
    GTFormatterYRightChiCang,
    GTFormatterYRightAxisDaDan,
    GTFormatterYLeftAxisDaDan,
    GTFormatterYLeftAxisFL,
    GTFormatterYLeftAxiPair,
    GTFormatterYRightAxiBigOrder,
    GTFormatterYRightAxiTextBigOrder,
    GTFormatterYRightAxiUpDownData,
    GTFormatterGray,
    GTFormatterRightGray,
    GTFormatterChibiRight,
    GTFormatterChibiLeft,
    GTFormatterC2CLeft,
    GTFormatterMarketTrendRight,
    GTFormatterYRightCoinPriceChiCang,
   
};

#import <Foundation/Foundation.h>
@import Charts;
NS_ASSUME_NONNULL_BEGIN

@interface GTYxisFearIndexValueFormatter : NSObject<IChartAxisValueFormatter>
+(instancetype)getGTYxisFearIndexValueFormatter;

@property (nonatomic, strong)NSArray * publicArry;
@property (nonatomic, assign)GTFormatterYType  formatterType;

@end

NS_ASSUME_NONNULL_END


