//
//  StarRdNetRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 网络请求成功
 */
typedef void(^successCompletionHandler)(NSDictionary *arg);
/**
 网络请求失败
 */
typedef void(^failureCompletionHandler)(NSString *arg);


@interface StarRdNetRequest : NSObject

+ (void)getWithPath:(NSString *)path
             params:(NSDictionary *)params
            success:(successCompletionHandler)success
            failure:(failureCompletionHandler)failure;

+ (void)postWithPath:(NSString *)path
              params:(NSDictionary *)params
             success:(successCompletionHandler)success
             failure:(failureCompletionHandler)failure;

@end

NS_ASSUME_NONNULL_END
