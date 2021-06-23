//
//  UITableView+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

#define starRd_dequeue_TableCell(cls) ([tableView starRd_dequeueReusableCell:[cls class] forIndexPath:indexPath])

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (StarRdComment)

- (void)starRd_registerCell:(nullable Class)cls;
- (void)starRd_registerView:(nullable Class)cls;

- (__kindof UITableViewCell *)starRd_dequeueReusableCell:(nullable Class)cls forIndexPath:(NSIndexPath *)idxPath;
- (nullable __kindof UITableViewHeaderFooterView *)starRd_dequeueReusableHeaderFooterView:(nullable Class)cls;

@end

NS_ASSUME_NONNULL_END
