//
//  StarRdTwoSegView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdTwoSegView : UIView<UIScrollViewDelegate>

@property (nonatomic, copy) void(^didSegBtnClick)(NSInteger tag);

@end

NS_ASSUME_NONNULL_END
