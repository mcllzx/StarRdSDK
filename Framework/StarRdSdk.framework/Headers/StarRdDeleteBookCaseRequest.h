//
//  StarRdDeleteBookCaseRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdDeleteBookCaseRequest : StarRdMCBaseRequest

@property (nonatomic, copy) NSArray<NSString *> *bookIds;

@end

NS_ASSUME_NONNULL_END
