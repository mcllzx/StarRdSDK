//
//  StarRdCommentManager.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 接口控制信息单例

@interface StarRdCommentManager : NSObject

+ (instancetype)sharedCommentMark;

@property (nonatomic, assign) BOOL isShowNav;
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *bookDetailbannerAdId;
@property (nonatomic, copy) NSString *rankListnavtionAdId;



@end

NS_ASSUME_NONNULL_END
