//
//  StarRdPubileManager.h
//  AFNetworking
//
//  Created by SJQ on 2020/7/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdPubileManager : NSObject

/// 初始化方法
/// @param json json字符串
+ (void)initWithJsonStr:(NSString *)json;


/// 返回视图VC
/// @param isHaveNavtion 是否需要导航栏返回按钮
+ (UIViewController *)backViewControllerWith:(BOOL)isHaveNavtion;

@end

NS_ASSUME_NONNULL_END
