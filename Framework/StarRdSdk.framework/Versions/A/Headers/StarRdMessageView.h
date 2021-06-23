//
//  StarRdMessageView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdMessageView : UIView {
    UIView *backgroundView;
    
    UILabel *textLabel;
    UIActivityIndicatorView *indicatorView;
    
    UIImageView *micImageView;
    UIView *waveView;
    UILabel *secondLabel;
    
    UILabel *cancelLabel;
    UIButton *cancelButton;
    
    float space;
    float baseY;
    float indicatorSize;
    
    NSTimer *hideTimer;
    
    float destProgress;
    float span;
}

@property(nonatomic) float baseY;

+ (StarRdMessageView *)getInstance;

- (void)stop;
- (void)stopImmediately;

- (void)showMessage:(NSString *)message duration:(float)duration;
- (void)showMessage:(NSString *)message;
- (void)showNetworkError;

- (void)startProcessing:(NSString *)content;
- (void)startNoTouchProcessing:(NSString *)content;
- (void)startLoading;
- (void)startSending;
- (void)startDeal;
- (void)analysising;

- (void)startDealingWithTitle:(NSString *)title;
- (void)startProgressing;
- (void)beginLogin;
- (void)beginBind;
- (void)startDeliver;

@end

NS_ASSUME_NONNULL_END
