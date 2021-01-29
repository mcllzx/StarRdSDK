//
//  StarRdSearchHistoryTextTableViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSearchHistoryTextTableViewCell : UITableViewCell

@property (nonatomic, strong) NSArray *hotList;                 //热搜数据

@property (nonatomic, copy) void(^clickHotAndHistoryKeyWordsBlock)(NSString *keyWords);
@property (nonatomic, copy) dispatch_block_t clickMoreBtnBlock;

- (void)setCellData:(NSArray *)historyArr isShowMore:(BOOL)isShowMore;

+ (CGFloat)cellHeightWithHotList:(NSArray *)list;
+ (CGFloat)cellHeightWithHistoryList:(NSArray *)list isShowMore:(BOOL)isShowMore;

@end

NS_ASSUME_NONNULL_END
