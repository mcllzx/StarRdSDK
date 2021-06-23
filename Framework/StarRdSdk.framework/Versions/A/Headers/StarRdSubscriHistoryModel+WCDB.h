//
//  StarRdSubscriHistoryModel+WCDB.h
//  hongyanreader
//
//  Created by SJQ on 2020/6/5.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import "StarRdSubscriHistoryModel.h"
#import <WCDB/WCDB.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriHistoryModel (WCDB)<WCTTableCoding>

WCDB_PROPERTY(bookId)
WCDB_PROPERTY(bookName)
WCDB_PROPERTY(bookCatalogUrl)
WCDB_PROPERTY(pagerNow)
WCDB_PROPERTY(chapterName)
WCDB_PROPERTY(createTime)
WCDB_PROPERTY(author)

@end

NS_ASSUME_NONNULL_END
