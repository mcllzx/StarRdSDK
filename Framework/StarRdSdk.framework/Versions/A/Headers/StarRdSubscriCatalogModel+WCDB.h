//
//  StarRdSubscriCatalogModel+WCDB.h
//  hongyanreader
//
//  Created by SJQ on 2019/12/4.
//  Copyright © 2019 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import "StarRdSubscriCatalogModel.h"
#import <WCDB/WCDB.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriCatalogModel (WCDB)<WCTTableCoding>

WCDB_PROPERTY(cataLogId)
WCDB_PROPERTY(bookId)
WCDB_PROPERTY(sort)
WCDB_PROPERTY(chapterName)
WCDB_PROPERTY(chapterUrl)

@end

NS_ASSUME_NONNULL_END
