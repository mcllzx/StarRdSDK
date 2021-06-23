//
//  StarRdSubscriReaderViewController.h
//  hongyanreader
//
//  Created by SJQ on 2019/12/4.
//  Copyright © 2019 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import "StarRdBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

//转码阅读器

@interface StarRdSubscriReaderViewController : StarRdBaseViewController

@property (nonatomic, strong) NSDictionary *chapterDict;
@property (nonatomic, assign) NSInteger preBookID;                      //书籍ID
@property (nonatomic, copy) NSString *chapterURL;
@property (nonatomic, assign) NSInteger searchSubType;                  //搜索页面转码类型,1-运营位,2-神马,3-360,4-百度
@property (nonatomic, copy) NSString *searchKey;                        //搜索关键词

- (void)reloadChapter;


@end

NS_ASSUME_NONNULL_END
