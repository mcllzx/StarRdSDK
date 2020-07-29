//
//  NSNumber+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSNumber (StarRdComment)

/**
 创建并返回一个NSNumber对象从一个字符串
 有效格式: @"12", @"12.345", @" -0xFF", @" .23e99 "...
 
 @param string  The string described an number.
 
 @return an NSNumber when parse succeed, or nil if an error occurs.
 */
+ (NSNumber *)starRd_numberWithString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
