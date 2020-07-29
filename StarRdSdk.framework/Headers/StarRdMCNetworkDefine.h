//
//  StarRdMCNetworkDefine.h
//  Pods
//
//  Created by 曹飞 on 2018/4/9.
//

#ifndef StarRdMCNetworkDefine_h
#define StarRdMCNetworkDefine_h

#pragma mark - MCBaseRequest defines

typedef NS_ENUM(NSInteger, MCRequestMethod) {
    MCRequestMethodGET = 0,
    MCRequestMethodPOST,
    MCRequestMethodHEAD,
    MCRequestMethodPUT,
    MCRequestMethodDELETE,
    MCRequestMethodPATCH,
};

/// 请求序列化类型
typedef NS_ENUM(NSInteger, MCRequestSerializerType) {
    MCRequestSerializerTypeHTTP = 0,
    MCRequestSerializerTypeJSON,
};

/// 响应序列化类型
typedef NS_ENUM(NSInteger, MCResponseSerializerType) {
    /// NSData type
    MCResponseSerializerTypeHTTP = 0,
    /// JSON object type
    MCResponseSerializerTypeJSON,
    /// NSXMLParser type
    MCResponseSerializerTypeXMLParser,
};

/// 请求优先级
typedef NS_ENUM(NSInteger, MCRequestPriority) {
    MCRequestPriorityLow = -4L,
    MCRequestPriorityDefault = 0,
    MCRequestPriorityHigh = 4,
};


@class StarRdMCBaseRequest;

/// 该网络请求回调代理, 在主线程中返回
@protocol StarRdMCRequestDelegate <NSObject>

@optional

/// 请求成功回调
- (void)requestFinished:(__kindof StarRdMCBaseRequest *)request;

/// 请求失败回调
- (void)requestFailed:(__kindof StarRdMCBaseRequest *)request;

@end


/// 网络请求状态回调, 在主线程中返回
@protocol MCRequestAccessory <NSObject>

@optional

/// 即将开始请求
- (void)requestWillStart:(id)request;

/// 即将结束请求, 在 'requestFinished:' 和 'successCompletionBlock' 之前执行
- (void)requestWillStop:(id)request;

/// 请求已经结束, 在 'requestFinished:' 和 'successCompletionBlock' 之后执行
- (void)requestDidStop:(id)request;

@end


#pragma mark - StarRdMCBatchRequest defines

@class StarRdMCBatchRequest;

@protocol StarRdMCBatchRequestDelegate <NSObject>

- (void)batchRequestFinished:(StarRdMCBatchRequest *)batchRequest;

- (void)batchRequestFailed:(StarRdMCBatchRequest *)batchRequest;

@end

@protocol StarRdMCBatchRequestAccessory <NSObject>

@optional

/// 即将开始请求
- (void)batchRequestWillStart:(id)request;

/// 即将结束请求, 在 'requestFinished:' 和 'successCompletionBlock' 之前执行
- (void)batchRequestWillStop:(id)request;

/// 请求已经结束, 在 'requestFinished:' 和 'successCompletionBlock' 之后执行
- (void)batchRequestDidStop:(id)request;

@end

#endif /* StarRdMCNetworkDefine_h */
