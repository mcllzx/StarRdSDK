//
//  StarRdClassRequestLogic.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class StarRdClassRequestLogic;
@protocol StarRdClassRequestLogicDelegate <NSObject>
@optional

- (void)sortRequest:(StarRdClassRequestLogic *)logic femealSorts:(NSArray *)sortAry error:(nullable NSError *)error;
- (void)sortRequest:(StarRdClassRequestLogic *)logic mealSorts:(NSArray *)sortAry error:(nullable NSError *)error;
- (void)sortRequest:(StarRdClassRequestLogic *)logic books:(NSArray *)bookAry categoryL2:(NSArray *)categoryAry error:(nullable NSError *)error;

@end

@interface StarRdClassRequestLogic : NSObject
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDelegate:(id<StarRdClassRequestLogicDelegate>)delegate NS_DESIGNATED_INITIALIZER;
@property (nonatomic, weak, readonly) id <StarRdClassRequestLogicDelegate> delegate;

/// 女生分类
- (void)requestFemealSort;
/// 男生分类
- (void)requestMealSort;

/// 根据分类获取小说 page [1, +∞)
- (void)requestBookWithPage:(NSInteger)page isFinish:(NSInteger)isFinish categoryL1:(NSInteger)cIDL1 categoryL2:(NSInteger)cIDL2;

@end

NS_ASSUME_NONNULL_END
