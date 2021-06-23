//
//  StarRdNavtionView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/9/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdNavtionView : UIView

- (instancetype)initWithFrame:(CGRect)frame title:(NSString *)title;

@property (nonatomic, copy) dispatch_block_t backClickBlock;
@property (nonatomic, copy) dispatch_block_t editClickBlock;        //点击编辑
@property (nonatomic, copy) dispatch_block_t doneClickBlock;        //点击完成



- (void)showRight;


@end

NS_ASSUME_NONNULL_END
