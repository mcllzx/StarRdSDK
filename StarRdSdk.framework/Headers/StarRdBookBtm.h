//
//  StarRdBookBtm.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdBookBtm : UIView

@property (nonatomic, strong, readonly) UIButton *btnAdd;
@property (nonatomic, strong, readonly) UIButton *btnRead;
@property (nonatomic, strong, readonly) UILabel *labTip;
@property (nonatomic, copy) void (^didAddBtnClick)(void);
@property (nonatomic, copy) void (^didReadBtnClick)(void);

@end

NS_ASSUME_NONNULL_END
