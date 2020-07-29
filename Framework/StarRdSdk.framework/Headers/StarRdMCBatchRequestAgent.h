//
//  StarRdMCBatchRequestAgent.h
//  AFNetworking
//
//  Created by 曹飞 on 2018/11/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class StarRdMCBatchRequest;

@interface StarRdMCBatchRequestAgent : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (StarRdMCBatchRequestAgent *)sharedAgent;

- (void)addRequest:(StarRdMCBatchRequest *)batchRequest;

- (void)removeRequest:(StarRdMCBatchRequest *)batchRequest;

- (BOOL)containsRequest:(StarRdMCBatchRequest *)batchRequest;

@end

NS_ASSUME_NONNULL_END
