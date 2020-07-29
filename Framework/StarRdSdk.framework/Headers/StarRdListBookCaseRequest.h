//
//  StarRdListBookCaseRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListBookCaseRequest : StarRdMCBaseRequest

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger size;

@end

NS_ASSUME_NONNULL_END
