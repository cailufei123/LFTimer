//
//  GTInterView.h
//  CoinTools
//
//  Created by MAC on 2021/3/17.
//  Copyright © 2021 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GTNewTopTableViewCell.h"
NS_ASSUME_NONNULL_BEGIN

@interface GTInterView : UIView
@property(nonatomic,strong)GTNewTopTableViewCell * topCell;
@property(nonatomic,strong)void(^selectBlock)(NSInteger index,NSArray * titleUrls,NSString * url);
@end

NS_ASSUME_NONNULL_END
