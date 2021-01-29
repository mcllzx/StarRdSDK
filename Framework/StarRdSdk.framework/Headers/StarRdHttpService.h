//
//  StarRdHttpService.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString *const GET;
FOUNDATION_EXTERN NSString *const POST;

FOUNDATION_EXTERN NSString *const DomainName;

typedef void(^completionHandler)(id data,NSError *error);
typedef void(^successHandler)(id data);
typedef void(^errHandler)(NSError *error);

@interface StarRdHttpService : NSObject

+ (StarRdHttpService *)httpService;

- (void)sendRequestWithHttpMethod:(NSString *)method
                          URLPath:(NSString *)pathString
                       parameters:(NSDictionary *)parameters
                completionHandler:(completionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
