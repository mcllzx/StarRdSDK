//
//  StarRdMallTopTableViewCell.h
//  AFNetworking
//
//  Created by SJQ on 2020/7/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdMallTopTableViewCell : UITableViewCell

@property (nonatomic, copy) dispatch_block_t sortBtnClickBlock;
@property (nonatomic, copy) dispatch_block_t classBtnClickBlock;

+ (CGFloat)cellHeight;

@end

NS_ASSUME_NONNULL_END
