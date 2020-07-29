//
//  MBProgressHUD+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import "MBProgressHUD.h"

NS_ASSUME_NONNULL_BEGIN

@interface MBProgressHUD (StarRdComment)

+ (instancetype)starRd_showMessageWithText:(NSString *)text;

+ (instancetype)starRd_showMessageWithText:(NSString *)text hideAfterDelay:(CGFloat)delay;

+ (instancetype)starRd_showMessageInView:(UIView *)view text:(NSString *)text;

+ (instancetype)starRd_showMessageInView:(UIView *)view text:(NSString *)text hideAfterDelay:(CGFloat)delay;

#pragma mark - Loading

+ (instancetype)starRd_showLoadingWithText:(NSString *)text;

+ (instancetype)starRd_showNoTouchLoadingWithText:(NSString *)text;

+ (instancetype)starRd_showLoadingWithText:(NSString *)text hideAfterDelay:(CGFloat)delay;

+ (instancetype)starRd_showLoadingInView:(UIView *)view text:(NSString *)text;

+ (instancetype)starRd_showLoadingInView:(UIView *)view text:(NSString *)text hideAfterDelay:(CGFloat)delay;

#pragma mark - Uploading

+ (instancetype)starRd_showUploadingWithText:(NSString *)text;

#pragma mark - Custom

+ (instancetype)starRd_showMessageWithCustomViewHud:(UIView *)customView;
+ (instancetype)starRd_showMessageWithCustomViewHud:(UIView *)customView hideAfterDelay:(CGFloat)delay;

@end

NS_ASSUME_NONNULL_END
