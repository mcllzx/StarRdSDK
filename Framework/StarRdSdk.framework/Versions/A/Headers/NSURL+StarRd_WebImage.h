//
//  NSURL+StarRd_WebImage.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURL (StarRd_WebImage)

+ (NSURL *)starRd_maj_urlWithImageID:(NSString *)imgID size:(CGSize)siz;

@end

NS_ASSUME_NONNULL_END
