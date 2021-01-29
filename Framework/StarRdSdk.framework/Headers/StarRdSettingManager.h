//
//  StarRdSettingManager.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <Foundation/Foundation.h>

#define HY_NIGHTMODEL_DIDCHANGE_NOTIFICATION          @"HY_NIGHTMODEL_DIDCHANGE_NOTIFICATION"
#define HY_EYE_PROTECTION_MODE_DIDCHANGE_NOTIFICATION @"HY_EYE_PROTECTION_MODE_DIDCHANGE_NOTIFICATION"
#define HY_MONEY_MAKING_MODE_DIDCHANGE_NOTIFICATION   @"HY_MONEY_MAKING_MODE_DIDCHANGE_NOTIFICATION"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSettingManager : NSObject

+ (float)dayDarkValue;
+ (void)setDayDarkValue:(float)value;

+ (float)nightDarkValue;
+ (void)setNightDarkValue:(float)value;

+ (UIView *)shareDarkView;
+ (void)setDarkView:(UIView *)view;

+ (BOOL)isNightModel;
+ (void)setNightModel:(BOOL)isNightModel;

+ (NSTextAlignment)alignment;
+ (NSLineBreakMode)lineBreakMode;

+ (BOOL)eyeProtectionMode;
+ (void)setEyeProtectionMode:(BOOL)isMode;

+ (BOOL)moneyMakingMode;
+ (void)setMoneyMakingMode:(BOOL)mode;

+ (void)setFontPath:(NSURL *)path;
+ (void)regisAllFont;

+ (CGFloat)readerParagraphSpacing;


@end

NS_ASSUME_NONNULL_END
