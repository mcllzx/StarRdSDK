//
//  StarRdSubscriWebViewAlert.h
//  hongyanreader
//
//  Created by SJQ on 2020/6/19.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriWebViewAlert : UIView

- (instancetype)initWithAlertStatus:(NSInteger)status;          //0-是否转码,1-进入阅读模式失败

@property (nonatomic, copy) dispatch_block_t subscriClickBlock;

//展示
- (void)showAlert;

//隐藏
- (void)disMissAlert;


@end

NS_ASSUME_NONNULL_END
