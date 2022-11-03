//
//  UIViewController+HYDENavigation.h
//  HYDE114Health
//
//  Created by 李莹 on 2018/4/2.
//  Copyright © 2018年 liying. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIViewController (HYDENavigation)

@property (nonatomic, strong) NSString *navTitle;

@property (nonatomic, assign) NSInteger popIndex;

- (void)setNavTitle:(NSString *)navTitle withColor:(NSString *)hexColor;

- (UIButton *)setNavLeftItems:(NSArray *)items selectIndex:(NSInteger)index;

- (UIButton *)setNavLeftItemTitle:(NSString *)title ImageName:(NSString *)imageName WithAction:(NSString *)action;

- (UIButton *)setNavRightItemTitle:(NSString *)title ImageName:(NSString *)imageName WithAction:(NSString *)action;

- (UIButton *)setNavRightItems:(NSArray *)items selectIndex:(NSInteger)index;

- (void)setNavBottomLine:(NSString *)color;

- (UIImageView *)findHairlineImageViewUnder:(UIView *)view;

- (UIButton *)leftItemTitle:(NSString *)title imageName:(NSString *)imageName withAction:(NSString *)action;

- (UIButton *)rightItemTitle:(NSString *)title imageName:(NSString *)imageName withAction:(NSString *)action;

- (UILabel *)navTitle:(NSString *)navTitle withColor:(NSString *)hexColor;

- (void)setTitleViewWith:(NSArray *)leftItems withRightItem:(NSArray *)rightItems withTitle:(UILabel *)titleLable;

- (void)setImageBack;

@end
