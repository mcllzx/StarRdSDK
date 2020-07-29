//
//  StarRdReaderContentRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderContentRequest : StarRdMCBaseRequest

@property (nonatomic, assign) NSInteger bookID;
@property (nonatomic, assign) NSInteger chapterID;

@end

NS_ASSUME_NONNULL_END
