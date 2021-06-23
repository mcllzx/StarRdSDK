//
//  StarRdSubscriLoadIngViewAlert.h
//  hongyanreader
//
//  Created by SJQ on 2020/9/11.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//转码等待视图

@interface StarRdSubscriLoadIngViewAlert : UIView

- (instancetype)initWithAlert;

@property (nonatomic, copy) dispatch_block_t closeLoadingAlertBlock;

//展示
- (void)showAlert;

//隐藏
- (void)disMissAlert;

@end

NS_ASSUME_NONNULL_END
