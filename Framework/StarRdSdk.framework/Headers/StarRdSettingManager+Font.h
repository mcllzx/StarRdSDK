//
//  StarRdSettingManager+Font.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import "StarRdSettingManager.h"

#define HY_FONT_DIDCHANGE_NOTIFICATION @"HY_FONT_DIDCHANGE_NOTIFICATION"

typedef NS_ENUM(NSInteger, HYFont) {
    HYFont_Default = 0,
    HYFont_KaiTi,   // 方正楷体简体
    HYFont_LiShu,   // 微软简隶书
    HYFont_YouYuan, // 幼圆
    HYFont_Count,
};

typedef NS_ENUM(NSInteger, HYFontSize) {
    HYFontSize_L0 = 0, // 15.5
    HYFontSize_LP1,    // 17.5
    HYFontSize_LP2,    // 19.5
    HYFontSize_LN1,    // 13.5
    HYFontSize_Count,
};

typedef NS_ENUM(NSInteger, HYLineSpacing) {
    HYLineSpacing_L0,  // 10
    HYLineSpacing_LP1, // 15
    HYLineSpacing_LN1, // 5
    HYLineSpacing_Count,
};

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSettingManager (Font)

+ (HYFont)readerFont;
+ (void)setReaderFont:(HYFont)font;

+ (HYFontSize)readerFontSize;
+ (void)setReaderFontSize:(HYFontSize)siz;

+ (HYLineSpacing)readerLineSpacing;
+ (void)setReaderLineSpacing:(HYLineSpacing)lineSpacing;

@end

NS_ASSUME_NONNULL_END
