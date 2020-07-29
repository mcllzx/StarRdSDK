//
//  StarRdBookNavView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdBookNavView : UIView

@property (nonatomic, strong, readonly) UILabel *labTitle;
@property (nonatomic, strong, readonly) UIButton *btnBack;
@property (nonatomic, strong) UIButton *rightBtn;
@property (nonatomic, copy) void (^didBackBtnClick)(void);

@end

NS_ASSUME_NONNULL_END
