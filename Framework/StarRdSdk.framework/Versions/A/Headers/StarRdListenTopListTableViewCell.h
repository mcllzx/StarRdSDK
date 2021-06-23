//
//  StarRdListenTopListTableViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListenTopListTableViewCell : UITableViewCell

- (void)setCellInfoWithDic:(NSDictionary *)dict;

+ (CGFloat)cellHeight;

@end

NS_ASSUME_NONNULL_END
