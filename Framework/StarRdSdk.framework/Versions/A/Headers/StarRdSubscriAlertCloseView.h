//
//  StarRdSubscriAlertCloseView.h
//  hongyanreader
//
//  Created by SJQ on 2020/6/3.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriAlertCloseView : UIView

@property (nonatomic, copy) dispatch_block_t closeBtnBlock;
- (void)setAlertStatus:(BOOL)isTop;

@end

NS_ASSUME_NONNULL_END
