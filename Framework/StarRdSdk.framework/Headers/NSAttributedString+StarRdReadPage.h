//
//  NSAttributedString+StarRdReadPage.h
//  StarRdSdk
//
//  Created by SJQ on 2021/1/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSAttributedString (StarRdReadPage)

- (NSArray *)starRd_pageRangeArrayWithConstrainedToSize:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
