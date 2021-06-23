//
//  StarRdMallMyShelfTableViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdMallMyShelfTableViewCell : UITableViewCell

@property (nonatomic, copy) dispatch_block_t clickListenBookBlock;

- (void)setCellDataWith:(NSDictionary *)bookDict listenBook:(NSDictionary *)listenDict;

@end

NS_ASSUME_NONNULL_END
