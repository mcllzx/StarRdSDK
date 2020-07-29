//
//  StarRdMallRequestLogic.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class StarRdMallRequestLogic;

@protocol StarRdMallRequestLogicDelegate <NSObject>
@optional

- (void)mallRequest:(StarRdMallRequestLogic *)logic
               page:(NSInteger)page
               size:(NSInteger)size
             isMale:(BOOL)isMale
              books:(nullable NSArray *)bookAry
       categoryList:(nullable NSArray *)categoryList
              error:(nullable NSError *)error;

- (void)mallRequest:(StarRdMallRequestLogic *)logic
               type:(NSInteger)type
              books:(nullable NSArray *)bookAry
              error:(nullable NSError *)error;


@end

@interface StarRdMallRequestLogic : NSObject

@property (nonatomic, weak) id<StarRdMallRequestLogicDelegate> delegate;

// 喜欢
- (void)requestLikeList:(NSInteger)page size:(NSInteger)size isMale:(BOOL)isMale;
// 1：精选、2：网友推荐
- (void)requestRecommendList:(NSInteger)type;

@end

NS_ASSUME_NONNULL_END
