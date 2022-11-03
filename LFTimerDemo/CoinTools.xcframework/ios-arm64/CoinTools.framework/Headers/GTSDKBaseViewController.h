//
//  GTSDKBaseViewController.h
//  CoinTools
//
//  Created by MAC on 2021/7/12.
//  Copyright © 2021 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTSDKBaseViewController : UIViewController

@property (nonatomic, strong) UIView *suspendBtn1;

- (void)hideSuspend;
- (void)refreshPage;
- (void)clickSkipPage:(NSInteger)index;
- (void)hideSpen;
- (void)showSpen;

@end

NS_ASSUME_NONNULL_END
