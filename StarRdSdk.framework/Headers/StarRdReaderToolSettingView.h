//
//  StarRdReaderToolSettingView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderToolSettingView : UIView

@property (nonatomic, copy) void (^didClode)(void);
- (void)show;

@end

NS_ASSUME_NONNULL_END
