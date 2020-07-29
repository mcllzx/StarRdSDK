//
//  StarRdMCBaseRequestAgent.h
//  Pods
//
//  Created by 曹飞 on 2018/4/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class StarRdMCBaseRequest;

/**
 StarRdMCBaseRequestAgent 是真正的管理请求的生成,发送和结束回调的底层类
 */
@interface StarRdMCBaseRequestAgent : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (StarRdMCBaseRequestAgent *)sharedAgent;

- (void)addRequest:(StarRdMCBaseRequest *)request;

- (void)cancelRequest:(StarRdMCBaseRequest *)request;

- (BOOL)containsRequest:(StarRdMCBaseRequest *)request;

- (void)cancelAllRequest;

@end

NS_ASSUME_NONNULL_END
