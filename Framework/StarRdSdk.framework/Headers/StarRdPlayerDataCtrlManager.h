//
//  StarRdPlayerDataCtrlManager.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdPlayerDataCtrlManager : NSObject

+ (instancetype)initPlayerDataMark;

@property (nonatomic, copy) void(^nowPlayStatusChangeBlock)(NSInteger status);
@property (nonatomic, copy) void(^nowPlayChapterNameBlock)(NSString *nowChapterName);   //更新章节名
@property (nonatomic, copy) void(^nowPlayProgressBlock)(NSTimeInterval nowProgressNum, NSTimeInterval allNum);   //更新进度
@property (nonatomic, copy) dispatch_block_t playerStatusStartBlock;  //播放结束
@property (nonatomic, copy) dispatch_block_t playerStatusEndBlock;  //播放结束

@property (nonatomic, assign) BOOL isPlayIng;

- (void)initWithNowChapterNum:(NSInteger)nowPlayChapterNum programCount:(NSInteger)programCount bookId:(NSInteger)bookId chapterId:(NSInteger)chapterId playUrl:(NSString *)playUrl;

//播放下一曲
- (void)playNextAction;

//播放上一曲
- (void)playLastAction;

//播放暂停
- (void)playPauseAction;

//播放恢复
- (void)playReplayAction;

//点击目录
- (void)clickCatalogAction;

//点击喜欢
- (void)clickLikeAction:(BOOL)isCollection back:(void (^)(BOOL isCollection))backBlock;

//设置播放进度
- (void)setPlayerPaogressNum:(NSTimeInterval)nowTime;

//上报播放信息
- (void)reportPlayerData;



@end

NS_ASSUME_NONNULL_END
