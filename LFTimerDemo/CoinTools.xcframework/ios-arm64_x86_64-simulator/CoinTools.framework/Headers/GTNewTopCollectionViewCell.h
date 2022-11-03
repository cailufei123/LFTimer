//
//  GTNewTopCollectionViewCell.h
//  CoinTools
//
//  Created by MAC on 2020/9/16.
//  Copyright © 2020 蔡路飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTNewTopCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *titleImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLb;
//@property(nonatomic,strong)NSString * titleImage;
@property(nonatomic,strong)NSString * titleText;
@end

NS_ASSUME_NONNULL_END
