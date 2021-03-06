//
//  UILabel+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (StarRdComment)

- (CGSize)starRd_textSizeWithSize:(CGSize)size;
- (CGFloat)starRd_textHeightWithWidth:(CGFloat)w;
- (CGFloat)starRd_textWidth;
- (CGFloat)starRd_textHeight;

/**
 *  设置字间距
 */
- (void)setColumnSpace:(CGFloat)columnSpace;
/**
 *  设置行距
 */
- (void)setRowSpace:(CGFloat)rowSpace;

@property(nonatomic) CGFloat starRd_miniFontSize;

@end

NS_ASSUME_NONNULL_END
