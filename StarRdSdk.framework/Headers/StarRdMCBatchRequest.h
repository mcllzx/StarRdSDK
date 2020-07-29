//
//  StarRdMCBatchRequest.h
//  AFNetworking
//
//  Created by 曹飞 on 2018/11/19.
//

#import <Foundation/Foundation.h>
#import "StarRdMCNetworkDefine.h"

NS_ASSUME_NONNULL_BEGIN

@class StarRdMCBaseRequest;
@class StarRdMCBatchRequest;

@interface StarRdMCBatchRequest : NSObject

#pragma mark - Request Information

@property (nonatomic, readonly, strong) NSArray<StarRdMCBaseRequest *> *requestArray;

/// 第一个失败的请求, 如果有请求失败, 则会导致batchRequest调用fail返回
@property (nonatomic, readonly, strong) StarRdMCBaseRequest *failedRequest;

#pragma mark - Request Configuration

- (instancetype)initWithRequestArray:(NSArray<StarRdMCBaseRequest *> *)requestArray NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

/// Tag可以用来标识一个请求, 默认是0
@property (nonatomic) NSInteger tag;

/// UserInfo可以用来存储附加的信息, 和tag作用差不多, 默认是nil
@property (nonatomic, strong, nullable) NSDictionary *userInfo;

/// 请求回调代理
@property (nonatomic, weak, nullable) id<StarRdMCBatchRequestDelegate> delegate;

@property (nonatomic, strong, readonly, nullable) NSArray<id<StarRdMCBatchRequestAccessory>> *requestAccessories;

/// 添加请求额外回调, 参考 'requestAccessories', 添加到里面的对象自动弱引用
- (void)addAccessory:(id<StarRdMCBatchRequestAccessory>)accessory;

#pragma mark - Request Action

- (void)start;

- (void)startWithCompletionBlockWithSuccess:(nullable void (^)(StarRdMCBatchRequest *))success
                                    failure:(nullable void (^)(StarRdMCBatchRequest *))failure;

- (void)stop;

@end

NS_ASSUME_NONNULL_END
