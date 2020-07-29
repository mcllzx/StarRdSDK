//
//  UIColor+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (StarRdComment)

/**
 十六进制数转颜色
 @param hexString 十六进制数
 */
+ (nullable UIColor *)starRd_colorWithHexString:(NSString *)hexString;

/**
 十六进制数转颜色
 @param hexString 十六进制数
 @param alphaComponent 透明度 0~1
 */
+ (nullable UIColor *)starRd_colorWithHexString:(NSString *)hexString alphaComponent:(CGFloat)alphaComponent;

/**
 当前颜色的十六进制值
 */
- (nullable NSString *)starRd_hexadecimalString;

/*
 随机颜色
 */
+(nullable UIColor *)starRd_randomColor;

@end

NS_ASSUME_NONNULL_END
