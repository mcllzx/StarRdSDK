//
//  StarRdMCNetworkPrivate.h
//  Pods
//
//  Created by 曹飞 on 2018/4/10.
//

#import <Foundation/Foundation.h>
#import "StarRdMCBaseRequest.h"
#import "StarRdMCBatchRequest.h"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT void MCNetLog(NSString *format, ...) NS_FORMAT_FUNCTION(1, 2);

@interface MCNetworkUtils : NSObject

+ (NSString *)md5StringFromString:(NSString *)string;
+ (BOOL)validateResumeData:(NSData *)data;

/**
 返回简短的请求URL, 根据MCBaseRequest的'BaseUR' 和 'requestUrl'组成
 该URL可以用作DownlaodTask的存储key
 */
+ (NSString *)simpleUrlForRequest:(StarRdMCBaseRequest *)request;

@end

#pragma mark - MCBaseRequest Interface

@interface StarRdMCBaseRequest (RequestAccessory)

- (void)toggleAccessoriesWillStartCallBack;
- (void)toggleAccessoriesWillStopCallBack;
- (void)toggleAccessoriesDidStopCallBack;

@end

@interface StarRdMCBaseRequest ()

- (void)clearCompletionBlock;

@end

@interface StarRdMCBaseRequest (Setter)

@property (nonatomic, strong, readwrite, nullable) NSURLSessionTask *requestTask;
@property (nonatomic, strong, readwrite, nullable) id responseObject;
@property (nonatomic, strong, readwrite, nullable) NSError *error;
@property (nonatomic, copy, readonly) MCRequestCompletionBlock successCompletionBlock;
@property (nonatomic, copy, readonly) MCRequestCompletionBlock failureCompletionBlock;
@property (nonatomic, copy, readonly) MCRequestDownloadProgressBlock downloadProgressBlock;
@property (nonatomic, copy, readonly) MCRequestUploadProgressBlock uploadProgressBlock;

@end


#pragma mark - StarRdMCBatchRequest Interface

@interface StarRdMCBatchRequest (RequestAccessory)

- (void)toggleAccessoriesWillStartCallBack;
- (void)toggleAccessoriesWillStopCallBack;
- (void)toggleAccessoriesDidStopCallBack;

@end

@interface StarRdMCBatchRequest ()

- (void)clearCompletionBlock;

@end

NS_ASSUME_NONNULL_END
