//
//  StarRdCatalogViewController.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import "StarRdBaseViewController.h"

typedef NS_ENUM(NSInteger, CatalogShowType) {
    CatalogShowType_line = 0,                   //线上书籍目录
    CatalogShowType_SubscriList,                 //转码书籍目录
    CatalogShowType_17KSDK,   // 17k书籍数据
};

NS_ASSUME_NONNULL_BEGIN

@interface StarRdCatalogViewController : StarRdBaseViewController

@property (nonatomic, assign) NSInteger preBookID;
@property (nonatomic, assign) NSInteger preChapterID;
@property (nonatomic, assign) NSInteger SDKID;

@property (nonatomic, assign) CatalogShowType showType;
@property (nonatomic, copy) NSString *cataLogURL;               //目录URL
@property (nonatomic, copy) NSString *chapterURL;               //章节的URL

@property (nonatomic, copy) NSString *bookName;
@property (nonatomic, assign) BOOL isFinish;


@property (nonatomic, copy) void (^clockIndexBlock)(NSInteger chapterId);

@end

NS_ASSUME_NONNULL_END
