//
//  XCSAdBannerImp.h
//  ADSuyiSDKDemo-iOS
//
//  Created by kaifa on 2020/7/28.
//  Copyright © 2020 陈坤. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XCSAdBannerProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface XCSAdBannerImp : NSObject<XCSADBannerLoaderProtocol>

/// 广告中间层代理，用于将广告 SDK 内部代码往外传
@property (nonatomic, weak) id<XCSAdBannerProtocol> xcs_loadDelegate;

@end

NS_ASSUME_NONNULL_END
