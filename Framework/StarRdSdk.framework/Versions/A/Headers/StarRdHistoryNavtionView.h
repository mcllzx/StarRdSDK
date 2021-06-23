//
//  StarRdHistoryNavtionView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, NavtionType) {
    NavtionTypeTop,
    NavtionTypeMiddle
};

@interface StarRdHistoryNavtionView : UIView

@property (nonatomic, assign) NSInteger selectIndex;            //0-阅读历史,1-转码记录
@property (nonatomic, copy) dispatch_block_t backBtnClickBlock;
@property (nonatomic, copy) void(^editBtnClickBlock)(BOOL isEditing);
@property (nonatomic, copy) void(^functionBtnClickBlock)(NSInteger selectIndex);

- (void)setFirstBtn:(NSString *)firstStr send:(NSString *)sendStr;

@property (nonatomic, assign) NavtionType type;

@end

NS_ASSUME_NONNULL_END
