//
//  StarRdSearchHistoryView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSearchHistoryView : UIView

@property (nonatomic, copy) void (^didKeywordClick)(NSString *keyWord, BOOL isListenBook);
@property (nonatomic, copy) void (^didDeleteClick)(void);

@property (nonatomic, strong) NSArray *hottestAry;
@property (nonatomic, strong) NSArray *hotListenAry;
@property (nonatomic, strong) NSMutableArray *historyAry;

- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
