//
//  StarRdSubScriFaildAlertView.h
//  hongyanreader
//
//  Created by SJQ on 2019/12/6.
//  Copyright © 2019 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//进入阅读模式失败弹框

@interface StarRdSubScriFaildAlertView : UIView

- (instancetype)initWithFaildAlertWith:(NSInteger)showType descri:(NSString *)desc;//1,再次尝试,2,跳转URL+加群

@property (nonatomic, copy) dispatch_block_t clickAgainBtnBlock;            //再次尝试
@property (nonatomic, copy) dispatch_block_t clickOpenWebBtnBlock;          //打开网址
@property (nonatomic, copy) dispatch_block_t clickAddGroupBtnBlock;         //加群
@property (nonatomic, copy) dispatch_block_t clickAgainSubscriBlock;        //重新搜索

@property (nonatomic, copy) NSString *showJSONErrorText;

//展示
- (void)showAlert;

//隐藏
- (void)disMissAlert;

@end

NS_ASSUME_NONNULL_END
