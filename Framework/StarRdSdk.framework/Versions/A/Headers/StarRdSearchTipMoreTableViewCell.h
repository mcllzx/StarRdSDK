//
//  StarRdSearchTipMoreTableViewCell.h
//  hongyanreader
//
//  Created by SJQ on 2020/2/20.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSearchTipMoreTableViewCell : UITableViewCell

@property (nonatomic, copy) dispatch_block_t clickMoreBtnBlock;

@property (nonatomic, assign) NSInteger showType;           //1-分析中,2-查看更多

@end

NS_ASSUME_NONNULL_END
