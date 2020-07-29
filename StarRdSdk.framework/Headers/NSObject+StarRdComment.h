//
//  NSObject+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 异步内存释放 vc无效 img >= 100x100 直接使用
#define asyncFree(obj) { id asyncObj = obj; obj = nil; starRd_asyncGlobalBlock(^{ [asyncObj class]; }); }

@interface NSObject (StarRdComment)

@end

@interface StarRdSafeAccessForwardTarget : NSObject

@end

NS_ASSUME_NONNULL_END

#pragma mark - Main Queue
FOUNDATION_EXTERN void starRd_syncMainBlock(void (^block)(void));
FOUNDATION_EXTERN void starRd_asyncMainBlock(double second, void (^block)(void)) __attribute__((overloadable));
FOUNDATION_EXTERN void starRd_asyncMainBlock(void (^block)(void))                __attribute__((overloadable));

#pragma mark - Global Queue
//性能下限 [10, 1w] [36, 67]ms
FOUNDATION_EXTERN void starRd_asyncGlobalBlock(double second, void (^block)(void)) __attribute__((overloadable));
FOUNDATION_EXTERN void starRd_asyncGlobalBlock(void (^block)(void))                __attribute__((overloadable));
