//
//  StarRdCGUtilities.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/15.
//

#import <Foundation/Foundation.h>



/// 状态栏高度
FOUNDATION_EXTERN CGFloat KMCStatusBarHeight(void);

#ifndef kStarRd_StatusBarHeight
#define kStarRd_StatusBarHeight KMCStatusBarHeight()
#endif


