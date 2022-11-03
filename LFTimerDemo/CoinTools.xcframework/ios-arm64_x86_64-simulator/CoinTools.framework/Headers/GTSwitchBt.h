//
//  GTSwitchBt.h
//  CoinTools
//
//  Created by MAC on 2020/10/27.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTSwitchBt : UIButton

@property (nonatomic, copy) void(^selectBlock) (BOOL select);
-(void)switchShapeAction:(UIButton * )sender;
@end

NS_ASSUME_NONNULL_END
