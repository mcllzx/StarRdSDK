//
//  Novel17kSDK.h
//  Novel17kSDK
//
//  Created by Ink on 2020/2/4.
//  Copyright © 2020 ChineseAll. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Novel17kConst.h"

NS_ASSUME_NONNULL_BEGIN

@interface Novel17kSDK : NSObject

// 第三方用户唯一ID标识;
@property (copy, nonatomic) NSString *user_key;

/// SDK单例
+ (Novel17kSDK *)shareInstance;

/// 设备ID
- (NSString *)appid;

/// 版本号
- (NSString *)version;

/// 配置SDK （Appid，和secret还有boundID需要配套使用）
/// @param appid 渠道appID
/// @param secret 渠道secret
- (void)configAppid:(NSString *)appid secret:(NSString *)secret;

/// 获取书单列表
/// @param lastUpdateDate 最后更新时间 格式 yyyy-MM-dd HH:mm:ss
/// @param page 分页 页码
/// @param count 每叶数量
/// @param completion 数据回调处理
- (NSURLSessionDataTask *)bookListWithLastUpdateDate:(NSString *)lastUpdateDate page:(NSInteger)page count:(NSInteger)count completion:(RequestCompletion)completion;

/// 书籍详情
/// @param bookId 书籍ID
/// @param completion 数据回调处理
- (NSURLSessionDataTask *)bookInfoWithBookId:(NSInteger)bookId completion:(RequestCompletion)completion;

/// 获取卷列表
/// @param bookId 书籍ID
/// @param completion 数据回调处理
- (NSURLSessionDataTask *)volumeListWithBookId:(NSInteger)bookId completion:(RequestCompletion)completion;

/// 获取卷和章节列表
/// @param bookId 书籍ID
/// @param completion 数据回调处理
- (NSURLSessionDataTask *)volumnAndChapterListWithBookId:(NSInteger)bookId completion:(RequestCompletion)completion;

/// 获取卷的章节列表
/// @param volumeId 卷ID
/// @param completion 数据回调处理
- (NSURLSessionDataTask *)chapterListWithVolumeId:(NSInteger)volumeId completion:(RequestCompletion)completion;

/// 章节增量更新列表
/// @param bookId 书籍ID
/// @param lastUpdateDate 当前书籍本地最后更新时间 格式 yyyy-MM-dd HH:mm:ss
/// @param completion 数据回调处理
- (NSURLSessionDataTask *)chapterIncListWithBookId:(NSInteger)bookId lastUpdateDate:(NSString *)lastUpdateDate completion:(RequestCompletion)completion;

/// 获取章节内容
/// @param bookId 书籍ID
/// @param chapterId 章节ID
/// @param completion 数据回调处理
- (NSURLSessionDataTask *)chapterContentWithBookId:(NSInteger)bookId chapterId:(NSInteger)chapterId completion:(RequestCompletion)completion;

@end

NS_ASSUME_NONNULL_END
