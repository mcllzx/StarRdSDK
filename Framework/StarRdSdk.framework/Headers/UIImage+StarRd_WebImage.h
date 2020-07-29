//
//  UIImage+StarRd_WebImage.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (StarRd_WebImage)

+ (void)starRd_maj_getImageWithID:(NSString *)imgID
                     size:(CGSize)siz
                   radius:(CGFloat)radius
               completion:(void (^)(UIImage * _Nullable image, NSURL * _Nonnull url, NSError * _Nullable error))completion;

+ (void)starRd_maj_getImageWithID:(NSString *)imgID
                      size:(CGSize)siz
                    radius:(CGFloat)radius
                   corners:(UIRectCorner)corners
                blendColor:(UIColor *)blendColor
                completion:(void (^)(UIImage * _Nullable image, NSURL * _Nonnull url, NSError * _Nullable error))completion;

- (nullable UIImage *)starRd_imageByResizeToSize:(CGSize)size contentMode:(UIViewContentMode)contentMode;

- (UIImage *)starRd_imageByRoundCornerRadius:(CGFloat)radius corners:(UIRectCorner)corners;

/// 混色(直接对原图进行背景混色, 避免像素混合)
- (UIImage *)starRd_imageByBlendColor:(UIColor *)color;

+ (UIImage *)starRd_imageWithColor:(UIColor *)color size:(CGSize)size;

- (UIColor *)starRd_maj_averageColor;

@end

NS_ASSUME_NONNULL_END
