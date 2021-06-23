//
//  UIButton+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (StarRdComment)

@property(nonatomic, assign) UIEdgeInsets hitTestEdgeInsets;


/// 垂直图文排版，+上图下文, -下图上文
- (void)starRd_verticalImageAndTitle:(CGFloat)len;

/// 水平图文排版，+左图右文(无需预设图文), -左文右图(需预设图文)
- (void)starRd_horizontalImageAndTitle:(CGFloat)len;

#pragma mark - Color
- (void)starRd_setTitleHexColor:(NSString *)color forState:(UIControlState)state;

@end

NS_ASSUME_NONNULL_END
