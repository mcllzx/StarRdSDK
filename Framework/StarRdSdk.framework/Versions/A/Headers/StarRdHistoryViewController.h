//
//  StarRdHistoryViewController.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/20.
//

#import <StarRdSdk/StarRdSdk.h>
#import "StarRdBaseViewController.h"
#import <JXCategoryView/JXCategoryView.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, HistoryType) {
    HistoryTypeTop,
    HistoryTypeMiddle
};

@interface StarRdHistoryViewController : StarRdBaseViewController<JXCategoryListContentViewDelegate>

@property (nonatomic, assign) HistoryType type;

@end

NS_ASSUME_NONNULL_END
