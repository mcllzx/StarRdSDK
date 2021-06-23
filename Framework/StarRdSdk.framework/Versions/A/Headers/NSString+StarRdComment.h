//
//  NSString+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (StarRdComment)

/**
 返回一个新的UUID
 */
+ (nullable NSString *)starRd_stringWithUUID;

/**
 返回idfa,iOS10后关闭广告追踪,无法读取到
 */
+ (nullable NSString *)starRd_stringWithIDFA;

/**
 简单验证是否是手机号码,1开头,11位
 */
- (BOOL)starRd_isTelephoneNumberSimple;

/**
 是否有中文
 */
- (BOOL)starRd_containsChinese;

/**
 不是空字符串, nil, @"", @"  ", @"\n", @"\t" 返回NO, 否则返回YES
 */
- (BOOL)starRd_isNotBlank;

/**
 尝试解析该字符串并返回一个'NSNumber'类型.
 @return 如果成功返回'NSNumber'类型, 如果解析失败返回 nil.
 */
- (nullable NSNumber *)starRd_numberValue;

/**
 用UTF-8编码成NSData类型
 */
- (nullable NSData *)starRd_dataValue;

#pragma mark - Encode and decode

/**
 Base64编码
 */
- (nullable NSString *)starRd_base64EncodedString;

/**
 Base64解码
 
 @param base64EncodedString The encoded string
 */
+ (nullable NSString *)starRd_stringWithBase64EncodedString:(NSString *)base64EncodedString;

/**
 Json解析
 如果失败,返回 nil
 
 e.g. NSString: @"{"name":"a","count":2}"  => NSDictionary: @[@"name":@"a",@"count":@2]
 */
- (nullable id)starRd_jsonValueDecodedWithError:(NSError **)error;

/**
 URL编码, utf-8
 */
- (NSString *)starRd_stringByURLEncode;

/**
 URL解码, utf-8
 */
- (NSString *)starRd_stringByURLDecode;

#pragma mark - Hash

/**
 MD5字符串
 */
- (nullable NSString *)starRd_md5String;

#pragma mark - Drawing

/**
 Returns the size of the string if it were rendered with the specified constraints.
 
 @param font          The font to use for computing the string size.
 
 @param size          The maximum acceptable size for the string. This value is
 used to calculate where line breaks and wrapping would occur.
 
 @param lineBreakMode The line break options for computing the size of the string.
 For a list of possible values, see NSLineBreakMode.
 
 @return              The width and height of the resulting string's bounding box.
 These values may be rounded up to the nearest whole number.
 */
- (CGSize)starRd_mc_sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;

/**
 Returns the width of the string if it were to be rendered with the specified
 font on a single line.
 
 @param font  The font to use for computing the string width.
 
 @return      The width of the resulting string's bounding box. These values may be
 rounded up to the nearest whole number.
 */
- (CGFloat)starRd_mc_widthForFont:(UIFont *)font;

/**
 Returns the height of the string if it were rendered with the specified constraints.
 
 @param font   The font to use for computing the string size.
 
 @param width  The maximum acceptable width for the string. This value is used
 to calculate where line breaks and wrapping would occur.
 
 @return       The height of the resulting string's bounding box. These values
 may be rounded up to the nearest whole number.
 */
- (CGFloat)starRd_mc_heightForFont:(UIFont *)font width:(CGFloat)width;

#pragma mark - NSNumber Compatible

// Now you can use NSString as a NSNumber
@property (readonly) char starRd_charValue;
@property (readonly) unsigned char starRd_unsignedCharValue;
@property (readonly) short starRd_shortValue;
@property (readonly) unsigned short starRd_unsignedShortValue;
@property (readonly) unsigned int starRd_unsignedIntValue;
@property (readonly) long starRd_longValue;
@property (readonly) unsigned long starRd_unsignedLongValue;
@property (readonly) unsigned long long starRd_unsignedLongLongValue;
@property (readonly) NSUInteger starRd_unsignedIntegerValue;


+ (NSString *)starRd_stringWithInteger:(NSInteger)integerValue;

//Trim
- (NSString *)trim;

//格式转换
- (NSString *)contentFix;
@end

NS_ASSUME_NONNULL_END
