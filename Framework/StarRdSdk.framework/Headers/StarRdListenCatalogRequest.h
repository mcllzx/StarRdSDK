//
//  StarRdListenCatalogRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/16.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListenCatalogRequest : StarRdMCBaseRequest

@property (nonatomic, assign) NSInteger page;           //页数
@property (nonatomic, assign) NSInteger albumId;        //专辑ID
@property (nonatomic, copy) NSString *sort;             //排序，asc升序、desc降序

@end

NS_ASSUME_NONNULL_END
