//
//  StarRdReaderRequestLogic.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class StarRdReaderRequestLogic;
@protocol StarRdReaderRequestLogicDelegate <NSObject>
@optional

- (void)readerRequest:(StarRdReaderRequestLogic *)logic content:(NSDictionary *)contentDic error:(nullable NSError *)error;
- (void)readerRequest:(StarRdReaderRequestLogic *)logic addToShelf:(NSArray<NSNumber *> *)bookIDs error:(nullable NSError *)error;

@end

@interface StarRdReaderRequestLogic : NSObject
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDelegate:(id<StarRdReaderRequestLogicDelegate>)delegate NS_DESIGNATED_INITIALIZER;
@property (nonatomic, weak, readonly) id <StarRdReaderRequestLogicDelegate> delegate;

// 获取章节内容
- (void)requestContentWithBookID:(NSInteger)bID chapterID:(NSInteger)cID;
// 添加书架
- (void)requestAddToShelfWithBookID:(NSInteger)bID chapterID:(NSInteger)cID;

@end

NS_ASSUME_NONNULL_END
