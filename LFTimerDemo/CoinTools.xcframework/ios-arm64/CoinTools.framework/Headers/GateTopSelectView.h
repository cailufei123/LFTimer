//
//  GateTopSelectView.h
//  block-pro
//
//  Created by MAC on 2020/8/31.
//  Copyright © 2020 MAC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JXCategoryView.h"
NS_ASSUME_NONNULL_BEGIN
 typedef enum {
     CategoryStyleDefault,
      CategoryZoomScale
     
 } CategoryTitleViewStyle;

@interface GateTopSelectView : UIView<JXCategoryViewDelegate>
@property (strong, nonatomic) UIView *lineView;
@property (nonatomic, strong) NSArray *titles;
@property (nonatomic, copy) void(^selectBlock) (NSInteger index,NSString * title);
@property (nonatomic, strong) JXCategoryTitleView *categoryView;
@property (nonatomic, assign) CategoryTitleViewStyle categoryTitleViewStyle;
- (instancetype)initWithFrame:(CGRect)frame categoryTitleViewStyle:(CategoryTitleViewStyle)categoryTitleViewStyle;
@property (nonatomic, assign) BOOL isSelect;
@end

NS_ASSUME_NONNULL_END
