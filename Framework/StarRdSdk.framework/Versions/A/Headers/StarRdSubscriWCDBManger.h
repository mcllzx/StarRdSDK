//
//  StarRdSubscriWCDBManger.h
//  hongyanreader
//
//  Created by SJQ on 2019/12/4.
//  Copyright © 2019 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StarRdSubscriBookDetailModel.h"
#import "StarRdSubscriCatalogModel.h"
#import "StarRdSubscriChapterModel.h"
#import "StarRdSubscriHistoryModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriWCDBManger : NSObject

+ (instancetype)sharedManager;

///书籍相关
///
///查询所有书籍信息
- (NSArray<StarRdSubscriBookDetailModel *> *)searchAllBookData;

///插入 传入书架书籍信息
- (void)insertBookDataArr:(NSArray<NSDictionary *> *)dictArr result:(void (^)(BOOL isSuccess))result;

///查询 根据ID查询书籍数据
- (StarRdSubscriBookDetailModel *)searchBookDataWithID:(NSInteger)bid;

///更新 正在阅读的章节
- (void)updateBookDetailLookingChapterURL:(NSString *)chapterURL chapterName:(NSString *)name bookId:(NSInteger)bookId;

///更新 正在阅读的章节的页数
- (void)updateBookDetailLookingChapterNum:(NSInteger)chapterNum bookId:(NSInteger)bookId;

///更新 最后阅读数时间
- (void)updateBookDetailLookingReadTime:(NSInteger)timeNum bookId:(NSInteger)bookId;

/// 更新书籍作者信息
- (void)updateBookDetailAuthor:(NSString *)name bookId:(NSInteger)bookId;

//返回最新插入的书的对象
- (StarRdSubscriBookDetailModel *)backLastSubscriBookModel;



///目录相关
///
//获取一本书的目录数据
- (NSArray *)getAllSubscriBookCatalogData:(NSInteger)bookId;

//添加目录到数据库
- (void)insertSubscriBookCatalogDataArr:(NSArray<NSDictionary *> *)dictArr bookId:(NSInteger)bookId result:(void (^)(BOOL isSuccess))result;

//删除一本书的所有信息
- (void)deleteBookDataWithBookId:(NSInteger)bookid;


//清除缓存,清除章节和目录缓存
- (void)deleteBookChapterAndCatalogData;

//传入目录URL,判断本地有无该书
- (BOOL)judgeBookInDownloadWithCatalogLink:(NSString *)cataUrl;




///章节相关

//存储章节
- (void)insertBookChapterDataWith:(NSDictionary *)dict bookID:(NSInteger)bookId;

//根据URL查询内容
- (StarRdSubscriChapterModel *)searchBookChapterDataWithURL:(NSString *)chapterUrl bookID:(NSInteger)bookId;


///转码记录
///
///查询所有转码记录
- (NSArray<StarRdSubscriHistoryModel *> *)searchAllHistoryBookData;
///根据目录地址来查询记录表内是否有该条记录
- (BOOL)inquireHistoryBookDataWith:(NSString *)bookCatalogUrl;
///根据目录地址来查询书籍表内是否有该条记录
- (BOOL)inquireHistoryBookInShelfWith:(NSString *)bookCatalogUrl;
///插入新的转码记录
- (void)insertHistoryBookDataDict:(NSDictionary *)dict;
///删除一条转码记录
- (void)deleteHistoryBookDataWithBookId:(NSInteger)bookid;


@end

NS_ASSUME_NONNULL_END
