//
//  StarRdSearchHistoryManager.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSearchHistoryManager : NSObject

+ (NSArray *)getSearchHistoryData;
+ (void)addHistorySearchData:(NSString *)str;
+ (void)clearHistorySearchData;

@end

NS_ASSUME_NONNULL_END
