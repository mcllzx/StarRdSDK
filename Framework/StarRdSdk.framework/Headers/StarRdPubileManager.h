//
//  StarRdPubileManager.h
//  AFNetworking
//
//  Created by SJQ on 2020/7/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 页面导入方式
typedef NS_ENUM(NSInteger, StarRdShowVCType) {
    StarRdShowVCType_Tabbar = 0,    //作为Tabbar子控制器
    StarRdShowVCType_Push,
    StarRdShowVCType_Present,
};

@interface StarRdPubileManager : NSObject

/// 初始化方法
/// @param json json字符串
+ (void)initWithJsonStr:(NSString *)json;

/// 返回阅读视图控制器
+ (UIViewController *)backReaderViewControllerWith:(StarRdShowVCType)showType;


@end

NS_ASSUME_NONNULL_END
