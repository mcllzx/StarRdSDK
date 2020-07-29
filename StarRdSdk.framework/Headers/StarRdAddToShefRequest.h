//
//  StarRdAddToShefRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdAddToShefRequest : StarRdMCBaseRequest

@property (nonatomic, strong) NSMutableArray *bookIDs;
@property (nonatomic, strong) NSMutableArray *chapterIDs;

- (void)addBook:(NSInteger)cid bid:(NSInteger)bid;

@end

NS_ASSUME_NONNULL_END
