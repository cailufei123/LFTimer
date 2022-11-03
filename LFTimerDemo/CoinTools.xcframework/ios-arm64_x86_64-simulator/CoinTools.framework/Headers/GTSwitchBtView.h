//
//  GTSwitchBtView.h
//  CoinTools
//
//  Created by MAC on 2020/11/16.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTSwitchBtView : UIView

@property (nonatomic, strong) UIButton *zhuzhuangBt;
@property (nonatomic, strong) UIButton *zhexianBt;
@property (nonatomic, copy) void(^selectBlock) (BOOL select);

@end

NS_ASSUME_NONNULL_END
