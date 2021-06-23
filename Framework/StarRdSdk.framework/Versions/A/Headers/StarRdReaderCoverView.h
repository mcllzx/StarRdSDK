//
//  StarRdReaderCoverView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderCoverView : UIView

@property (nonatomic, assign, readonly) NSInteger nowPageNum;
@property (nonatomic, copy, nullable) UIView * _Nullable (^needPage)(NSInteger pageNum);
@property (nonatomic, copy) void (^didEmptyViewTouch)(void);
@property (nonatomic, copy) void (^didNowPgaeNumChange)(NSInteger pageNum);
@property (nonatomic, copy) void (^wantToLastChapter)(void);
@property (nonatomic, copy) void (^wantToNextChapter)(void);

- (void)setNowViewInfoWithPage:(NSInteger)pageNum;

@end

NS_ASSUME_NONNULL_END
