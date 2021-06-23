//
//  StarRdNativeAdTableViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2021/3/19.
//

#import <UIKit/UIKit.h>
#import <XCSADCore/XCSAdTemplateNativeView.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdNativeAdTableViewCell : UITableViewCell

@property (nonatomic, strong) XCSAdTemplateNativeView *navtionView;

+ (CGFloat)cellHeight;

@end

NS_ASSUME_NONNULL_END
