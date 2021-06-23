//
//  UIViewController+RootController.h
//  MC_XiaoChuShuo
//
//  Created by kaifa on 2018/10/22.
//  Copyright © 2018年 MC_MaoDou. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (RootController)

/**
 返回当前显示的控制器
 
 @return 控制器
 */
+ (UIViewController *) wz_presentingController;
+ (UIWindow *)wz_getNormalWindow;

@end

NS_ASSUME_NONNULL_END
