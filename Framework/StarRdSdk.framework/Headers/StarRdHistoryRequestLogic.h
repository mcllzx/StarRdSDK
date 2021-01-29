//
//  StarRdHistoryRequestLogic.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@class StarRdHistoryRequestLogic;
@protocol StarRdHistoryRequestLogicDelegate <NSObject>
@optional

- (void)historyRequest:(StarRdHistoryRequestLogic *)logic historyAry:(NSArray *)hisAry listenHistoryAry:(NSArray *)listenHistoryAry error:(nullable NSError *)error;
- (void)historyRequest:(StarRdHistoryRequestLogic *)logic addToShelf:(NSArray<NSNumber *> *)bookIDs error:(nullable NSError *)error;
- (void)historyRequest:(StarRdHistoryRequestLogic *)logic deleteHistory:(NSArray *)bookIDAry error:(nullable NSError *)error;

@end

@interface StarRdHistoryRequestLogic : NSObject
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDelegate:(id<StarRdHistoryRequestLogicDelegate>)delegate NS_DESIGNATED_INITIALIZER;
@property (nonatomic, weak, readonly) id <StarRdHistoryRequestLogicDelegate> delegate;

- (void)requestHistoryWithPage:(NSInteger)pageNum;
- (void)requestAddToShelfWithBookID:(NSInteger)bID chapterID:(NSInteger)cID;
- (void)requestAddToShelfWithBookIDs:(NSArray<NSNumber *>*)bIDs chapterID:(NSArray<NSNumber *>*)cIDs;
- (void)deleteHistoryWithBookIDAry:(NSArray *)bAry;

@end

NS_ASSUME_NONNULL_END
