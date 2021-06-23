//
//  UIImageView+StarRd_XCS.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^XCSWebImageCompletionBlock)(UIImage * _Nullable image, NSURL *url, NSError * _Nullable error);

@interface UIImageView (StarRd_XCS)

/**
 图片圆角
 */
@property (nonatomic) CGFloat starRd_xcs_cornerRadius;

/// 绘制圆角时的填充背景，默认nil时将填充透明
@property (nonatomic, strong) UIColor *starRd_xcs_fillColor;



- (void)starRd_xcs_setImageWithURL:(NSURL *)imageURL
                placeholder:(nullable UIImage *)placeholder;

- (void)starRd_xcs_setImageWithURL:(NSURL *)imageURL
                placeholder:(nullable UIImage *)placeholder
                 completion:(nullable XCSWebImageCompletionBlock)completion;

- (void)starRd_xcs_setImageWithURL:(NSURL *)imageURL
                placeholder:(nullable UIImage *)placeholder
                    corners:(UIRectCorner)corners
                 completion:(nullable XCSWebImageCompletionBlock)completion;

@end

NS_ASSUME_NONNULL_END
