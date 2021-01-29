//
//  StarRdListenTopListLogic.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class StarRdListenTopListLogic;

@protocol StarRdListenTopListLogicDelegate <NSObject>
@optional

- (void)topListRequest:(StarRdListenTopListLogic *)logic page:(NSInteger)page books:(nullable NSArray *)bookAry error:(nullable NSError *)error;
- (void)bookDetail:(StarRdListenTopListLogic *)logic detailDict:(NSDictionary *)dict error:(nullable NSError *)error;
- (void)bookCatalog:(StarRdListenTopListLogic *)logic page:(NSInteger)page catalog:(nullable NSArray *)catalogArr total:(NSInteger)total error:(nullable NSError *)error;
- (void)bookPlayUrl:(StarRdListenTopListLogic *)logic playDict:(NSDictionary *)dict error:(nullable NSError *)error;


@end

@interface StarRdListenTopListLogic : NSObject
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDelegate:(id<StarRdListenTopListLogicDelegate>)delegate NS_DESIGNATED_INITIALIZER;
@property (nonatomic, weak) id<StarRdListenTopListLogicDelegate> delegate;

//获取专辑排行榜列表
- (void)getListenListWith:(NSInteger)page;

//获取专辑详情
- (void)getBookDetailWith:(NSInteger)bookID;

//获取专辑目录
- (void)getBookCatalogWith:(NSInteger)bookID page:(NSInteger)page sort:(NSString *)sort;

//获取播放链接
- (void)getBookPlayUrlWith:(NSInteger)bookID chapterID:(NSInteger)chapterID;

//上报播放记录
- (void)uploadListenWith:(NSDictionary *)dict;



@end

NS_ASSUME_NONNULL_END
