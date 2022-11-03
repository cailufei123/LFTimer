//
//  GatePublicSelectModel.h
//  block-pro
//
//  Created by MAC on 2020/9/3.
//  Copyright © 2020 MAC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GTHomeModel.h"
@import UIKit;

typedef NS_ENUM(NSInteger, GTShape) {
    circular = 0,
    specialCircular,
    square
};
typedef NS_ENUM(NSInteger, GTChartDataType) {
    timeType = 1,
    firstType ,
    defaultType,
    totalType,

};

typedef NS_ENUM(NSInteger, GTChartAxialDirectionType) {
    LeftType = 1,
    rightType
};

typedef NS_ENUM(NSInteger, GTChartSwitchType) {
    LineType = 1,
    doubleBar,
    groupBar,
    singleBar,
    bubble,
};
NS_ASSUME_NONNULL_BEGIN

@interface GatePublicSelectModel : NSObject <NSCopying,NSCoding>

@property(nonatomic,strong) GTAlldatalistModel * alldatalistModel;

@property(nonatomic,assign)GTChartDataType  chartDataType;

@property(nonatomic,assign) BOOL  selectEnabled;

//@property(nonatomic,assign) BOOL  isSelect;

@property(nonatomic,assign)GTShape  shape;

@property(nonatomic,strong)UIColor * color;

@property(nonatomic,copy)NSString * strColor;

@property(nonatomic,copy)NSString * defaultStrColor;

@property(nonatomic,copy)NSString * selectStrColor;

@property(nonatomic,strong)UIColor * selectColor;

@property(nonatomic,strong)UIColor * titlesColor;

@property(nonatomic,copy)NSString * titleText;

@property(nonatomic,copy)NSString * key;

@property(nonatomic,copy)NSString * comtentText;

@property(nonatomic,assign) BOOL  isTime;

@property(nonatomic,assign) BOOL  isBG;

@property(nonatomic,assign) BOOL  is￥;

@property(nonatomic,assign) BOOL isAnimation;

@property(nonatomic,assign) BOOL isLoding;

@property(nonatomic,strong)UIColor * contentColor;//markView 的内容的颜色

@property(nonatomic,assign) BOOL isShowInMarkView;//是否显示在markView中

@property(nonatomic,assign) BOOL isShowLineFull;//是否填充

@property(nonatomic,assign) BOOL isShowLineDot;//是否有点点

@property(nonatomic,assign) BOOL isSwitchLineOrBar;//是可以切换柱状折线

@property(nonatomic,assign) BOOL isShowLineOrBar;//这条线或者柱 是否显示处理 （总单）

@property(nonatomic,assign) GTChartAxialDirectionType axialDirectionType;//轴的方向

@property(nonatomic,assign) GTChartSwitchType switchType;//可以 - 切换成Bar 的样式

@property(nonatomic,assign) GTChartSwitchType recordSwitchType;//记录 切换成Bar 的样式

@property(nonatomic,assign)GTChartSwitchType  currentChartSwitchType; //当前的Bar  -样式

@property(nonatomic,strong) GTHomeTitleModel * dataModel; //v2Data

@property(nonatomic,strong) NSMutableArray * contentArr;

@property(nonatomic,assign) BOOL  isDrawValuesEnabled;

@property(nonatomic,assign) BOOL  isShowIcon;//只有行情图标显示图标其他的目前不显示

@property(nonatomic,strong) NSString * excolor;

@property(nonatomic,strong) NSString * successRate;

@property(nonatomic,strong) NSString * targetValue;

@property(nonatomic,strong) NSString * type;

@end




NS_ASSUME_NONNULL_END
