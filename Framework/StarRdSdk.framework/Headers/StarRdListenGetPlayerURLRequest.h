//
//  StarRdListenGetPlayerURLRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/16.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListenGetPlayerURLRequest : StarRdMCBaseRequest

@property (nonatomic, assign) NSInteger albumId;
@property (nonatomic, assign) NSInteger chapterId;

@end

NS_ASSUME_NONNULL_END
