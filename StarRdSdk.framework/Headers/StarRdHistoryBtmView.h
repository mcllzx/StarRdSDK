//
//  StarRdHistoryBtmView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdHistoryBtmView : UIView

@property (nonatomic, strong, readonly) UIButton *btnDetelete;
@property (nonatomic, copy) void (^didAllBtnClick)(void);
@property (nonatomic, copy) void (^didDeteleteBtnClick)(void);

@end

NS_ASSUME_NONNULL_END
