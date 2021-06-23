//
//  StarRdBookTitleView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdBookTitleView : UIView

@property (nonatomic, copy) void (^didThemeColorChange)(UIColor *color);

- (void)setViewInfoWithDic:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
