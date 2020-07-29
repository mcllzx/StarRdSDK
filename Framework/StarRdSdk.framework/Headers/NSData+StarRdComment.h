//
//  NSData+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (StarRdComment)

#pragma mark - Encode and Decode

/**
 UTF8编码
 */
- (nullable NSString *)starRd_utf8String;

/**
 Base64编码
 */
- (nullable NSString *)starRd_base64EncodedString;

/**
 Base64解码

 @param base64EncodedString The encoded string.
 */
+ (nullable NSData *)starRd_dataWithBase64EncodedString:(NSString *)base64EncodedString;

/**
 Json解析
 如果失败,返回 nil
 */
- (nullable id)starRd_jsonValueDecodedWithError:(NSError **)error;

#pragma mark - Hash

/**
 MD5编码
 */
- (NSString *)starRd_md5String;

@end

NS_ASSUME_NONNULL_END
