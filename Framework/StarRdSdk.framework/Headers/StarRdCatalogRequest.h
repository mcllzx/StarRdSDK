//
//  StarRdCatalogRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdCatalogRequest : StarRdMCBaseRequest

@property (nonatomic, assign) NSInteger pageNum;
@property (nonatomic, assign) NSInteger bookID;

@end

NS_ASSUME_NONNULL_END
