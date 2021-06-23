//
//  StarRdListenPlayWindowAlert.h
//  hongyanreader
//
//  Created by SJQ on 2021/3/1.
//  Copyright © 2021 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListenPlayWindowAlert : UIView

- (instancetype)initWithAlert;

@property (nonatomic, strong) UIImageView *iconImageView;
@property (nonatomic, strong) UIButton *playBtn;

@property (nonatomic, copy) dispatch_block_t pauseClickBlock;
@property (nonatomic, copy) dispatch_block_t playClickBlock;
@property (nonatomic, copy) dispatch_block_t closeClickBlock;
@property (nonatomic, copy) dispatch_block_t imageClickBlock;

//展示
- (void)showAlert;

//隐藏
- (void)disMissAlert;

@end

NS_ASSUME_NONNULL_END
