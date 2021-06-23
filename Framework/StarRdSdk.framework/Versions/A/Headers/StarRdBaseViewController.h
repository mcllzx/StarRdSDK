//
//  StarRdBaseViewController.h
//  Pods
//
//  Created by SJQ on 2020/7/20.
//

#import <UIKit/UIKit.h>
//#import "StarRdListenSuspendView.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdBaseViewController : UIViewController {
    UILabel *navigationBarTitleLabel;
    float space;
}

@property(nonatomic, strong) UIViewController *popDestViewController;
//@property(nonatomic, strong) StarRdListenSuspendView *suspendView;

+ (UIViewController *)currentViewController;

- (void)back;
- (void)pop;

- (void)setNavigationBarLeftAction:(SEL)action;
- (void)setModalNavigationBarTitle:(NSString *)title leftAction:(SEL)action;

- (void)setNavigationBarTitle:(NSString *)title;

- (void)setNavigationBarTitle:(NSString *)title leftAction:(SEL)action;
- (void)setNavigationBarRightTitle:(NSString *)title action:(SEL)action;

- (void)removeNavigationBarRight;

@end

@interface StarRdBaseNavigationController : UINavigationController

@end

NS_ASSUME_NONNULL_END
