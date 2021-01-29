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

/// 分类-男生
+ (void)openBoySortViewCtrl;

/// 分类-女生
+ (void)openGirsSortViewCtrl;

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

/// 搜索页
+ (void)openSearchViewCtrl;

/// 听书排行榜
+ (void)openListenTopViewCtrl;

/// 听书详情页
+ (void)openListenDetailViewWith:(NSInteger)bookId;

/// 播放页
/*
 @property (nonatomic, assign) NSInteger nowPlayChapterNum;              //当前播放的是第几章,1,2,3...
 @property (nonatomic, assign) NSInteger programCount;                   //全部节目数
 @property (nonatomic, assign) NSInteger bookId;                         //书籍ID
 @property (nonatomic, copy) NSString *bookImageUrl;                     //书籍封面图
 @property (nonatomic, copy) NSString *bookName;                         //书名
 @property (nonatomic, assign) BOOL isJoinCase;                      //是否加入书架
 @property (nonatomic, assign) NSInteger chapterId;                  //章节ID
 @property (nonatomic, copy) NSString *chapterName;                  //章节名
 @property (nonatomic, copy) NSString *playUrl;                      //当前播放章节链接
 */
+ (void)openListerPlayerViewCtrl:(NSInteger)nowSelectChapterNum
                    programCount:(NSInteger)programCount
                          bookId:(NSInteger)bookId
                    bookImageUrl:(NSString *)bookImageUrl
                        bookName:(NSString *)bookName
                      isJoinCase:(BOOL)isJoinCase
                       chapterId:(NSInteger)chapterId
                     chapterName:(NSString *)chapterName
                         playUrl:(NSString *)playUrl;




@end

NS_ASSUME_NONNULL_END
