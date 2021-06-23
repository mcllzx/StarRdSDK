//
//  StarRdPlayerToolManager.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdPlayerToolManager : NSObject

+ (instancetype)sharePlayerMark;

//记录当前正在播放的音频信息
@property (nonatomic, assign) NSInteger nowPlayChapterNum;              //当前播放的是第几章,1,2,3...
@property (nonatomic, assign) NSInteger programCount;                   //全部节目数
@property (nonatomic, assign) NSInteger bookId;                         //书籍ID
@property (nonatomic, copy) NSString *bookImageUrl;                     //书籍封面图
@property (nonatomic, copy) NSString *bookName;                         //书名
@property (nonatomic, assign) BOOL isJoinCase;                      //是否加入书架
@property (nonatomic, assign) NSInteger chapterId;                  //章节ID
@property (nonatomic, copy) NSString *chapterName;                  //章节名
@property (nonatomic, copy) NSString *playUrl;                      //当前播放章节链接
@property (nonatomic, assign) NSTimeInterval nowPlayTime;           //当前播放时间



@end

NS_ASSUME_NONNULL_END
