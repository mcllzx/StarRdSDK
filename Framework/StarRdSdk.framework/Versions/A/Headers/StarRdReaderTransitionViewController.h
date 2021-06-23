//
//  StarRdReaderTransitionViewController.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import "StarRdBaseViewController.h"
#import "StarRdSettingManager+Transition.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderTransitionViewController : StarRdBaseViewController

@property (nonatomic, assign) CGSize maxPageSize;
@property (nonatomic, assign) NSInteger allPageNum;
@property (nonatomic, assign, readonly) NSInteger nowPage;
@property (nonatomic, assign) HYTransition transition;

@property (nonatomic, copy) void (^didEmptyViewTouch)(void);
@property (nonatomic, copy) CGSize (^needPageSize)(NSInteger needPage, CGSize maxPageSize);
@property (nonatomic, copy) UIView * (^needPage)(NSInteger pageNum, CGSize pageSize);

@property (nonatomic, copy) void (^wantToLastChapter)(void);
@property (nonatomic, copy) void (^wantToNextChapter)(void);

- (void)resetNowPageNum:(NSInteger)pageNum;

//无动画切换
- (void)resetNoAnimaPageNum:(NSInteger)pageNum;

@end

NS_ASSUME_NONNULL_END
