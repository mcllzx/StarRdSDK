//
//  StarRdListRecommendRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListRecommendRequest : StarRdMCBaseRequest

//1：精选、2：网友推荐
@property (nonatomic, assign) NSInteger type;

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger size;

@end

NS_ASSUME_NONNULL_END
