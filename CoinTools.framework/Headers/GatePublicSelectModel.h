//
//  GatePublicSelectModel.h
//  block-pro
//
//  Created by MAC on 2020/9/3.
//  Copyright © 2020 MAC. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;
typedef NS_ENUM(NSInteger, GTShape) {
    circular = 0,
    specialCircular,
    square
};

NS_ASSUME_NONNULL_BEGIN

@interface GatePublicSelectModel : NSObject
@property(nonatomic,assign) BOOL  selectEnabled;

@property(nonatomic,assign)GTShape  shape;

@property(nonatomic,strong)UIColor * color;

@property(nonatomic,copy)NSString * strColor;

@property(nonatomic,strong)UIColor * selectColor;

@property(nonatomic,strong)UIColor * titlesColor;

@property(nonatomic,copy)NSString * titleText;

@end

NS_ASSUME_NONNULL_END
