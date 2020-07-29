//
//  StarRdSettingManager+Transition.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import "StarRdSettingManager.h"

#define HY_TRANSITION_DIDCHANGE_NOTIFICATION @"HY_TRANSITION_DIDCHANGE_NOTIFICATION"

typedef NS_ENUM(NSInteger, HYTransition) {
    HYTransition_Simulation,     //仿真
    HYTransition_LeftRight,      //左右分页
    HYTransition_UpDown,         //上下翻页
    HYTransition_Cover,          //覆盖
    HYTransition_WithoutAnimate, //无动画
    HYTransition_Count,
};

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSettingManager (Transition)

+ (HYTransition)transition;
+ (void)setTransition:(HYTransition)transition;

@end

NS_ASSUME_NONNULL_END
