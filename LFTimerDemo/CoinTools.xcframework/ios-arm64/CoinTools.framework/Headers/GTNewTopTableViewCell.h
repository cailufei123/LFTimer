//
//  GTNewTopTableViewCell.h
//  CoinTools
//
//  Created by MAC on 2020/9/16.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "GTInterView.h"
NS_ASSUME_NONNULL_BEGIN

@interface GTNewTopTableViewCell : UITableViewCell
@property(nonatomic,strong)void(^selectBlock)(NSInteger index,NSArray * titleUrls,NSString * url,NSString * title);
@property(nonatomic,strong)GTHomepage_navigationModel * homepage_navigation;//
+(instancetype)loadTableViewCell;
@property(nonatomic,strong)UICollectionView * collectionView;
@property(nonatomic,strong)void(^scrollViewDidScrollBlock)(CGFloat x);
@property(nonatomic,strong)NSMutableArray * titleModels;
///V2Nav
@property(nonatomic,strong)GTPublicContentModel * bigTitleM;
@end

NS_ASSUME_NONNULL_END
