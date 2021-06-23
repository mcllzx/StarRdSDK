//
//  StarRdSubscriSearchFailAlert.h
//  hongyanreader
//
//  Created by SJQ on 2020/9/17.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//转码搜索失败弹框

@interface StarRdSubscriSearchFailAlert : UIView

- (instancetype)initWithAlertUrl:(NSURL *)url index:(NSInteger)cIndex;

@property (nonatomic, copy) dispatch_block_t closeAlertBlock;

//展示
- (void)showAlert;

//隐藏
- (void)disMissAlert;

@end

NS_ASSUME_NONNULL_END
