//
//  StarRdSubscriSearchAlertDataManager.h
//  hongyanreader
//
//  Created by SJQ on 2020/6/19.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriSearchAlertDataManager : NSObject

//保存本次搜索转码弹框点击数据
+ (void)setupSearchAlertData:(NSString *)urlStr;

//判断当前点击链接在不在本次记录数据中
+ (BOOL)checkClickedSearchAlertData:(NSString *)urlStr;

//移除本地所有记录点击数据
+ (void)clearAllSearchCashData;

/// 记录转码记录,在第二次转码时自动加入书架

// 判断该转码书籍是否是二次转码
+ (BOOL)checkTheBookIsInUserCashData:(NSString *)cataLogUrl;

// 判断该转码书籍是否自动跳转过目录
+ (BOOL)checkTheBookAutoOpenCataLog:(NSString *)cataLogUrl;

// 书架里面书籍删除的时候一并删除保存的跳转目录信息
+ (void)deleteCheckBookAutoOpenLogData:(NSString *)cataLogUrl;




@end

NS_ASSUME_NONNULL_END
