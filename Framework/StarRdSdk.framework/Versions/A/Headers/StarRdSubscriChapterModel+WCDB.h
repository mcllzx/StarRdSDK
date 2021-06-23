//
//  StarRdSubscriChapterModel+WCDB.h
//  hongyanreader
//
//  Created by SJQ on 2020/2/5.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import "StarRdSubscriChapterModel.h"
#import <WCDB/WCDB.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriChapterModel (WCDB)<WCTTableCoding>

WCDB_PROPERTY(chapterId)
WCDB_PROPERTY(bookId)
WCDB_PROPERTY(chapterName)
WCDB_PROPERTY(pagerCurrent)
WCDB_PROPERTY(nowChapterUrl)
WCDB_PROPERTY(lastChapterUrl)
WCDB_PROPERTY(nextChapterUrl)
WCDB_PROPERTY(content)

@end

NS_ASSUME_NONNULL_END
