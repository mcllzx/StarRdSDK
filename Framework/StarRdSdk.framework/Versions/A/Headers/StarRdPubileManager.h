//
//  StarRdPubileManager.h
//  AFNetworking
//
//  Created by SJQ on 2020/7/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIkit.h>

NS_ASSUME_NONNULL_BEGIN

// 页面导入方式
typedef NS_ENUM(NSInteger, StarRdShowVCType) {
    StarRdShowVCType_Tabbar = 0,    //作为Tabbar子控制器
    StarRdShowVCType_Push,
    StarRdShowVCType_Present,
    StarRdShowVCType_NoNav,
};

@interface StarRdPubileManager : NSObject

/// 初始化方法
/// @param json json字符串
+ (void)initWithJsonStr:(NSString *)json;

/// 返回阅读视图控制器
+ (UIViewController *)backReaderViewControllerWith:(StarRdShowVCType)showType;

/// 版本号
+ (NSString *)starRd_version;

/// 播放控制

/// 继续播放
+ (void)playReplayAction;
/// 暂停播放
+ (void)playPauseAction;
/// 播放上一曲
+ (void)playLastAction;
/// 播放下一曲
+ (void)playNextAction;
/// 小窗口暂停
+ (void)playSmallPauseAction;


@end

NS_ASSUME_NONNULL_END
