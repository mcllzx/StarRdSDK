//
//  UIImageView+StarRd_WebImage.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (StarRd_WebImage)

/// 图片圆角(默认0)
@property (nonatomic) CGFloat starRd_maj_radius;
/// 圆角类型(默认UIRectCornerAllCorners)
@property (nonatomic) UIRectCorner starRd_maj_corners;
/// 混色(默认透明)
@property (nonatomic) UIColor *starRd_maj_blendColor;


/// 默认placeholderImage
- (void)starRd_maj_setImageWithID:(NSString *)imgID;
- (void)starRd_maj_setImageWithID:(NSString *)imgID placeholderImage:(nullable UIImage *)holderImg;

- (void)starRd_maj_setImageWithID:(NSString *)imgID
         placeholderImage:(nullable UIImage *)holderImg
               completion:(nullable void (^)(UIImage * _Nullable image, NSURL * _Nonnull url, NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
