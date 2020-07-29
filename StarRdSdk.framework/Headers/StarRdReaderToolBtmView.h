//
//  StarRdReaderToolBtmView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderToolBtmView : UIView

@property (nonatomic, strong) UIButton *downLoadBtn;
@property (nonatomic, copy) void (^didCatalogBtnClick)(void);
@property (nonatomic, copy) void (^didSettingBtnClick)(void);

- (void)showFromY:(CGFloat)stY toY:(CGFloat)edY;

@end

NS_ASSUME_NONNULL_END
