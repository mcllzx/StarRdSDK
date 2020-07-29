//
//  StarRdViewCtrl.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdViewCtrl : NSObject

/// 排行榜
+ (void)openRankViewCtrl;

/// 分类
+ (void)openSortViewCtrl;

/// 二级分类
+ (void)openSortListViewCtrlWithTitle:(NSString *)title sortID:(NSInteger)sID;

/// 书籍详情
+ (void)openBookViewCtrlWithID:(NSInteger)bID;

/// 章节目录
+ (void)openCatalogViewCtrlWithBookID:(NSInteger)bID chapterID:(NSInteger)cID;

/// 阅读页
+ (void)openReaderWithBookID:(NSInteger)bID chapterID:(NSInteger)cID;

/// 阅读历史
+ (void)openHistoryViewCtrl;

/// 阅读历史
+ (void)openUserCollectionViewCtrl;

@end

NS_ASSUME_NONNULL_END
