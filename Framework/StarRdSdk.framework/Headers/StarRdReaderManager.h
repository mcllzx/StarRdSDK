//
//  StarRdReaderManager.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderManager : NSObject

/// 获取分页range
+ (NSArray<NSString *> *)rangeAryOfPagesFromeString:(NSString *)txtStr
                                               font:(UIFont *)nowFont
                                        lineSpacing:(CGFloat)nowLineSpacing
                                           viewSize:(CGSize)siz;

/// CoreText 高度计算(YYText)
+ (CGFloat)attributedString:(NSAttributedString *)attStr heightWithWidth:(CGFloat)width;

+ (CGSize)maxTextSize;

+ (NSInteger)adShowCount;
+ (void)addAdShowCount:(NSInteger)cnt;

+ (NSInteger)adClickCount;
+ (void)addAdClickCount:(NSInteger)cnt;




/// 获取分页range
+ (NSArray<NSString *> *)rangeAryOfPagesFromeWithString:(NSString *)txtStr
                                   viewSize:(CGSize)siz
                                chapterName:(NSString *)chapterName;

@end

NS_ASSUME_NONNULL_END
