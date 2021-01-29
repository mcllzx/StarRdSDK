//
//  StarRdSearchNavView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSearchNavView : UIView

@property (nonatomic, strong, readonly) UITextField *txtField;
@property (nonatomic, strong, readonly) UIButton *btnSearch;
@property (nonatomic, copy) void (^didBackBtnClick)(void);
@property (nonatomic, copy) void (^didSearchBtnClick)(void);
@property (nonatomic, copy) void (^didKeywordChange)(NSString *keyWord);

@property (nonatomic, copy) NSString *placeholderText;

@end

NS_ASSUME_NONNULL_END
