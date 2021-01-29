//
//  StarRdBookRequestLogic.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@class StarRdBookRequestLogic;
@protocol StarRdBookRequestLogicDelegate <NSObject>
@optional

- (void)bookRequest:(StarRdBookRequestLogic *)logic detail:(NSDictionary *)detailDic error:(nullable NSError *)error;
- (void)bookRequest:(StarRdBookRequestLogic *)logic otherRead:(NSArray *)otherAry error:(nullable NSError *)error;

@end

@interface StarRdBookRequestLogic : NSObject
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDelegate:(id<StarRdBookRequestLogicDelegate>)delegate NS_DESIGNATED_INITIALIZER;
@property (nonatomic, weak, readonly) id <StarRdBookRequestLogicDelegate> delegate;

- (void)requestDetailWithBookID:(NSInteger)bID;

/// 其他用户还在读
- (void)requestOtherReadeWithFCategoryId:(NSInteger)cateId;

@end

NS_ASSUME_NONNULL_END
