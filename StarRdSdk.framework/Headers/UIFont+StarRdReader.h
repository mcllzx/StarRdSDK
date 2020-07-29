//
//  UIFont+StarRdReader.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>
#import "StarRdSettingManager+Font.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIFont (StarRdReader)

+ (UIFont *)starRd_hy_readerFont;
+ (UIFont *)starRd_hy_fontWithType:(HYFont)font size:(HYFontSize)siz;

+ (CGFloat)starRd_hy_readerLineSpacing;
+ (CGFloat)starRd_hy_readerLineSpacingWithType:(HYLineSpacing)type;

@end

NS_ASSUME_NONNULL_END
