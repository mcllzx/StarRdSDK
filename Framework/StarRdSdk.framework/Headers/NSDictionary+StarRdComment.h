//
//  NSDictionary+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary<__covariant KeyType, __covariant ObjectType> (StarRdComment)

- (nullable ObjectType)starRd_objectOrNilForKey:(KeyType)aKey;

@end

@interface NSMutableDictionary (Safe)

- (void)starRd_setObjectSafely:(id)anObject aKey:(id <NSCopying>)aKey;

@end

NS_ASSUME_NONNULL_END
