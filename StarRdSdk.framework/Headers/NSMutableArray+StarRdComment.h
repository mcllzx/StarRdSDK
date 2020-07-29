//
//  NSMutableArray+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableArray (StarRdComment)

/// 顺序插入 [stIdx, gap)
- (NSInteger)starRd_maj_orderInsertObject:(NSObject *)obj startIndex:(NSInteger)stIdx gap:(NSInteger)gap;

/// 逆序插入
- (NSInteger)starRd_maj_reverseInsertObject:(NSObject *)obj endIndex:(NSInteger)stIdx gap:(NSInteger)gap;

@end

NS_ASSUME_NONNULL_END
