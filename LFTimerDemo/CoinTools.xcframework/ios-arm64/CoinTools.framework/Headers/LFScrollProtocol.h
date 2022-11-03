//
//  LFScrollProtocol.h
//  CoinTools
//
//  Created by clf on 2022/10/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LFScrollProtocol <NSObject>

@optional
- (void)scrollViewDidScroll:(UIScrollView *)scrollView;
- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView;
@end

NS_ASSUME_NONNULL_END


