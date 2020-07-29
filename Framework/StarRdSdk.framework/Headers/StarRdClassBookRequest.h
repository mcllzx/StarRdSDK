//
//  StarRdClassBookRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdClassBookRequest : StarRdMCBaseRequest

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger isFinish;//-1 不限，0 连载， 1 完结
@property (nonatomic, assign) NSInteger fCategoryID;
@property (nonatomic, assign) NSInteger categoryID;

@end

NS_ASSUME_NONNULL_END
