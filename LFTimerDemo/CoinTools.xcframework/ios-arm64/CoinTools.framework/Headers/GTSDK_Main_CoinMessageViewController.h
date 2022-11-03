//
//  GTCoinMessageViewController.h
//  CoinTools
//
//  Created by MAC on 2021/7/28.
//  Copyright © 2021 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTSDK_Main_CoinMessageViewController : GateBaseViewController

@property(nonatomic,copy)NSString* coinUrl;

@property(nonatomic,assign)BOOL isPresent;
-(void)hideSuspend;
-(void)refreshPage;
-(void)clickSkipPage:(NSInteger)index;
-(void)hideSpen;
-(void)showSpen;
@end

NS_ASSUME_NONNULL_END
