//
//  StarRdWebImageSetter.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

#import <pthread.h>

#if __has_include(<YYWebImage/YYWebImage.h>)
#import <YYWebImage/YYWebImageManager.h>
#else
#import "YYWebImageManager.h"
#endif

NS_ASSUME_NONNULL_BEGIN

static inline void _yy_dispatch_sync_on_main_queue(void (^block)(void)) {
    if (pthread_main_np()) {
        block();
    } else {
        dispatch_sync(dispatch_get_main_queue(), block);
    }
}

extern NSString *const starRd_XCSWebImageFadeAnimationKey;
extern const NSTimeInterval starRd_XCSWebImageFadeTime;
extern const NSTimeInterval starRd_XCSWebImageProgressiveFadeTime;

@interface StarRdWebImageSetter : NSObject

/// Current image url.
@property (nullable, nonatomic, readonly) NSURL *imageURL;
/// Current sentinel.
@property (nonatomic, readonly) int32_t sentinel;

/// Create new operation for web image and return a sentinel value.
- (int32_t)setOperationWithSentinel:(int32_t)sentinel
                                url:(nullable NSURL *)imageURL
                            options:(YYWebImageOptions)options
                            manager:(YYWebImageManager *)manager
                           progress:(nullable YYWebImageProgressBlock)progress
                          transform:(nullable YYWebImageTransformBlock)transform
                         completion:(nullable YYWebImageCompletionBlock)completion;

/// Cancel and return a sentinel value. The imageURL will be set to nil.
- (int32_t)cancel;

/// Cancel and return a sentinel value. The imageURL will be set to new value.
- (int32_t)cancelWithNewURL:(nullable NSURL *)imageURL;

/// A queue to set operation.
+ (dispatch_queue_t)setterQueue;

@end

NS_ASSUME_NONNULL_END
