//
//  StarRdSettingManager+StarRdBackground.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import "StarRdSettingManager.h"

#define HY_BACKGROUND_DIDCHANGE_NOTIFICATION @"HY_BACKGROUND_DIDCHANGE_NOTIFICATION"

typedef NS_ENUM(NSInteger, starRd_HYBackground) {
    starRd_HYBackground_Default = 0,
    starRd_HYBackground_EBEBEB,
    starRd_HYBackground_D6E8C5,
    starRd_HYBackground_DDD7D0,
    starRd_HYBackground_152535,
    starRd_HYBackground_363435,
    starRd_HYBackground_Count,
};

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSettingManager (StarRdBackground)

+ (starRd_HYBackground)readerBackground;
+ (void)setReaderBackground:(starRd_HYBackground)bg;

@end

NS_ASSUME_NONNULL_END
