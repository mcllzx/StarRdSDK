//
//  UIImage+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (StarRdComment)

+ (UIImage *)imageNamed:(NSString *)name bundleName:(NSString *)bundleName className:(Class)className;

- (UIImage *)starRd_imageByTintColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
