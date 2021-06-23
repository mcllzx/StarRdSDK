//
//  StarRdSubscriChapterModel.h
//  hongyanreader
//
//  Created by SJQ on 2020/2/5.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSubscriChapterModel : NSObject

@property (nonatomic , assign) NSInteger              chapterId;                //章节ID
@property (nonatomic , assign) NSInteger              bookId;                   //书籍ID
@property (nonatomic , copy) NSString              * chapterName;               //本章节名称
@property (nonatomic , copy) NSString              * pagerCurrent;              //目录URL地址
@property (nonatomic , copy) NSString              * nowChapterUrl;             //本章节URL地址
@property (nonatomic , copy) NSString              * lastChapterUrl;            //上一章节URL地址
@property (nonatomic , copy) NSString              * nextChapterUrl;            //下一章节URL地址
@property (nonatomic , copy) NSString              * content;                   //章节内容

@end

NS_ASSUME_NONNULL_END
