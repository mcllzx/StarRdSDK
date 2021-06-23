//
//  NSArray+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray<__covariant ObjectType> (StarRdComment)

- (nullable ObjectType)starRd_objectOrNilAtIndex:(NSUInteger)index;

@end


@interface NSMutableArray<ObjectType> (StarRdComment)

/**
 Reverse the index of object in this array.
 Example: Before @[@1, @2, @3], After @[@3, @2, @1].
 */
- (void)starRd_reverse;

/**
 Sort the object in this array randomly
 */
- (void)starRd_shuffle;

- (id)starRd_objectAtIndexSafely:(NSUInteger)index;

- (void)starRd_addObjectSafely:(id)anObject;

- (void)starRd_insertObjectSafely:(id)anObject atIndex:(NSUInteger)index;

- (void)starRd_removeObjectAtIndexSafely:(NSUInteger)index;

- (void)starRd_removeObjectSafely:(id)anObject;

- (void)starRd_replaceObjectAtIndexSafely:(NSUInteger)index withObject:(id)anObject;

@end

NS_ASSUME_NONNULL_END
