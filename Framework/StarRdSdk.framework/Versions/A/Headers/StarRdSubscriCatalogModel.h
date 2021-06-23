//
//  StarRdSubscriCatalogModel.h
//  hongyanreader
//
//  Created by SJQ on 2019/12/4.
//  Copyright © 2019 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriCatalogModel : NSObject

@property (nonatomic , assign) NSInteger              cataLogId;            //章节目录ID
@property (nonatomic , assign) NSInteger              bookId;               //书籍ID
@property (nonatomic , assign) NSInteger              sort;                 //章节索引
@property (nonatomic , copy) NSString                *chapterName;          //章节名
@property (nonatomic , copy) NSString                *chapterUrl;           //章节内容URL

@end

NS_ASSUME_NONNULL_END
