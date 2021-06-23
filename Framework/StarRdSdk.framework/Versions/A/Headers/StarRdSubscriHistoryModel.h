//
//  StarRdSubscriHistoryModel.h
//  hongyanreader
//
//  Created by SJQ on 2020/6/5.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriHistoryModel : NSObject

@property (nonatomic , assign) NSInteger            bookId;                     //书籍唯一ID
@property (nonatomic , copy) NSString               *bookName;                  //书籍名字
@property (nonatomic , copy) NSString               *bookCatalogUrl;            //书籍目录地址
@property (nonatomic , copy) NSString               *pagerNow;                  //当前阅读章节URL
@property (nonatomic , copy) NSString               *chapterName;               //当前阅读章节名
@property (nonatomic , assign) NSInteger            createTime;                 //创建时间
@property (nonatomic , copy) NSString               *author;                    //作者

@end

NS_ASSUME_NONNULL_END
