//
//  StarRdSubscriCatalogHelp.h
//  hongyanreader
//
//  Created by SJQ on 2019/12/7.
//  Copyright © 2019 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//临时记录下未存书架的转码数据目录

@interface StarRdSubscriCatalogHelp : NSObject

+ (instancetype)sharedSubscriCatalogMark;

@property (nonatomic, copy) NSString *pasteUrl;             //粘贴的地址
@property (nonatomic, strong) NSArray *cataLogList;         //临时缓存目录

@end

NS_ASSUME_NONNULL_END
