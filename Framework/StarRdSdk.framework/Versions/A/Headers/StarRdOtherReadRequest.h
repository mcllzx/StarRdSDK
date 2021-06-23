//
//  StarRdOtherReadRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdOtherReadRequest : StarRdMCBaseRequest

@property (nonatomic, assign) NSInteger bookId;
@property (nonatomic, assign) NSInteger fCategoryId;

@end

NS_ASSUME_NONNULL_END
