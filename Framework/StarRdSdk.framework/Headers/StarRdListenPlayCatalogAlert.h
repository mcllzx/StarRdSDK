//
//  StarRdListenPlayCatalogAlert.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListenPlayCatalogAlert : UIView

@property (nonatomic, copy) void(^clickPlayCellBlock)(NSInteger selectIndex,NSString *chapterName, NSInteger chapterId, NSString *playUrl);

- (instancetype)initWithBookID:(NSInteger)bookID chapterID:(NSInteger)chapteID;

//展示
- (void)showAlert;

//隐藏
- (void)disMissAlert;

@end

NS_ASSUME_NONNULL_END
