//
//  StarRdRankRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdRankRequest : StarRdMCBaseRequest

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger size;
@property (nonatomic, assign) BOOL isFinish;
@property (nonatomic, assign) BOOL isMale;

@end

NS_ASSUME_NONNULL_END
