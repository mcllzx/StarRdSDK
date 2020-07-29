//
//  UIImage+StarRdReader.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>
#import "StarRdSettingManager+StarRdBackground.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (StarRdReader)

+ (UIImage *)starRd_hy_readerBackgroundImage;
+ (UIImage *)starRd_hy_imageWithBackgroundType:(starRd_HYBackground)bg;

@end

NS_ASSUME_NONNULL_END
