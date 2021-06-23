//
//  StarRdSubscriBookDetailModel+WCDB.h
//  hongyanreader
//
//  Created by SJQ on 2019/12/4.
//  Copyright © 2019 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import "StarRdSubscriBookDetailModel.h"
#import <WCDB/WCDB.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriBookDetailModel (WCDB)<WCTTableCoding>

WCDB_PROPERTY(bookId)
WCDB_PROPERTY(bookName)
WCDB_PROPERTY(bookCatalogUrl)
WCDB_PROPERTY(pagerNow)
WCDB_PROPERTY(chapterName)
WCDB_PROPERTY(chapterPercentage)
WCDB_PROPERTY(lastReadTime)
WCDB_PROPERTY(createTime)
WCDB_PROPERTY(subType)
WCDB_PROPERTY(author)

@end

NS_ASSUME_NONNULL_END
