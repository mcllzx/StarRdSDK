//
//  StarRdShelfRequestLogic.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class StarRdShelfRequestLogic;
@protocol StarRdShelfRequestLogicDelegate <NSObject>
@optional

- (void)shelfRequest:(StarRdShelfRequestLogic *)logic
                page:(NSInteger)page
                size:(NSInteger)size
                list:(nullable NSArray<NSDictionary *> *)list
               error:(nullable NSError *)error;

- (void)shelfRequest:(StarRdShelfRequestLogic *)logic
      deleteBookCase:(nullable NSArray<NSString *> *)ids
               error:(nullable NSError *)error;

@end

@interface StarRdShelfRequestLogic : NSObject
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDelegate:(id<StarRdShelfRequestLogicDelegate>)delegate NS_DESIGNATED_INITIALIZER;
@property (nonatomic, weak, readonly) id <StarRdShelfRequestLogicDelegate> delegate;

- (void)requestListBookCase:(NSInteger)page size:(NSInteger)size;

- (void)requestDeleteBookCase:(NSArray<NSString *> *)ids;

@end

NS_ASSUME_NONNULL_END
