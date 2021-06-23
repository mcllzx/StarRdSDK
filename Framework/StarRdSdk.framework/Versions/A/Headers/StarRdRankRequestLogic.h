//
//  StarRdRankRequestLogic.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class StarRdRankRequestLogic;
@protocol StarRdRankRequestLogicDelegate <NSObject>
@optional

- (void)endRequest:(StarRdRankRequestLogic *)logic page:(NSInteger)page size:(NSInteger)size isFinish:(BOOL)isFinish isMale:(BOOL)isMale books:(nullable NSArray *)bookAry error:(nullable NSError *)error;

@end

@interface StarRdRankRequestLogic : NSObject

@property (nonatomic, weak) id <StarRdRankRequestLogicDelegate> delegate;

- (void)requestFinishAndRank:(NSInteger)page size:(NSInteger)size isFinish:(BOOL)isFinish isMale:(BOOL)isMale;

@end

NS_ASSUME_NONNULL_END
