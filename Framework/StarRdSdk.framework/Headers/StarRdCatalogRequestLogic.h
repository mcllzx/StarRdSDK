//
//  StarRdCatalogRequestLogic.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@class StarRdCatalogRequestLogic;
@protocol StarRdCatalogRequestLogicDelegate <NSObject>
@optional

- (void)catalogRequest:(StarRdCatalogRequestLogic *)logic catalog:(NSArray *)catalogAry isFinish:(BOOL)isFinish allPage:(NSInteger)allPage error:(nullable NSError *)error;

@end

@interface StarRdCatalogRequestLogic : NSObject
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDelegate:(id<StarRdCatalogRequestLogicDelegate>)delegate NS_DESIGNATED_INITIALIZER;
@property (nonatomic, weak, readonly) id <StarRdCatalogRequestLogicDelegate> delegate;

- (void)requestCatalogWithPageNum:(NSInteger)pageNum bookID:(NSInteger)bID;

@end

NS_ASSUME_NONNULL_END
