//
//  StarRdHeader.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/20.
//

#ifndef StarRdHeader_h
#define StarRdHeader_h

#import <Masonry/Masonry.h>


#import "StarRdMCNetwork.h"
#import "StarRd_WebImage.h"
#import "StarRdViewCtrl.h"
#import "StarRdSettingManager.h"


#import "UIFont+StarRdComment.h"
#import "UIColor+StarRdComment.h"
#import "UIImage+StarRdComment.h"
#import "UIDevice+StarRdComment.h"
#import "NSString+StarRdComment.h"
#import "NSData+StarRdComment.h"
#import "NSArray+StarRdComment.h"
#import "NSUserDefaults+StarRdComment.h"
#import "UIApplication+StarRdComment.h"
#import "UIView+StarRdComment.h"
#import "NSObject+StarRdComment.h"
#import "NSDictionary+StarRdComment.h"
#import "UIButton+StarRdComment.h"
#import "UICollectionView+StarRdComment.h"
#import "UILabel+StarRdComment.h"
#import "UITableView+StarRdComment.h"
#import "NSMutableArray+StarRdComment.h"


#import "StarRdAccountManager.h"
#import "StarRdMessageView.h"


#define kScreenWidth        [UIScreen mainScreen].bounds.size.width
#define kScreenHeight       [UIScreen mainScreen].bounds.size.height

// 机型UI适配宏
#define kScreenScale    [UIScreen mainScreen].scale
#define kIPhoneX (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone && (kScreenWidth == 375.0 && kScreenHeight == 812.0))
#define kIphoneXS (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone && (kScreenWidth == 375.0 && kScreenHeight == 812.0))
#define kIphoneXR (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone && (kScreenWidth == 414.0 && kScreenHeight == 896.0) && (kScreenScale == 2))
#define kIphoneXS_MAX (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone && (kScreenWidth == 414.0 && kScreenHeight == 896.0) && (kScreenScale == 3))
#define kCurveScreen (kIPhoneX || kIphoneXS || kIphoneXR || kIphoneXS_MAX) // 刘海屏幕
#define kStatusBarHeight (kCurveScreen ? 44 : 20)
#define kNavBarHeight ([UIDevice currentDevice].starRd_isPad ? 50 : 44)
#define kTopBarHeight (kStatusBarHeight + kNavBarHeight)
#define kTabBarHeight (kCurveScreen ? 83 : 49)

// 系统对象缩写
#define kApplication        [UIApplication sharedApplication]
#define kKeyWindow          [UIApplication sharedApplication].delegate.window
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]

#define addTarget_TouchUpInside(obj, slt)  [obj addTarget:self action:@selector(slt) forControlEvents:UIControlEventTouchUpInside]
#define addTarget_EditingChanged(obj, slt) [obj addTarget:self action:@selector(slt) forControlEvents:UIControlEventEditingChanged]
#define addTarget_ValueChanged(obj, slt)   [obj addTarget:self action:@selector(slt) forControlEvents:UIControlEventValueChanged]

// 是否空对象
#define kStringIsEmpty(str)     ([str isKindOfClass:[NSNull class]] || str == nil || ![str isKindOfClass:[NSString class]] || [str length] < 1 ? YES : NO)
#define kArrayIsEmpty(array)    (array == nil || [array isKindOfClass:[NSNull class]] || ![array isKindOfClass:[NSArray class]] || array.count == 0)
#define kDictIsEmpty(dict)      (dict == nil || [dict isKindOfClass:[NSNull class]] || ![dict isKindOfClass:[NSDictionary class]] || dict.allKeys.count == 0)
#define kObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))

// 三值取中
#define MID(min, mid, max) ({\
__typeof__(min) __nMin = MIN(min, max);\
__typeof__(max) __nMax = MAX(min, max);\
__typeof__(mid) __nMid = MAX(__nMin, mid);\
MIN(__nMid, __nMax);\
})

#ifndef weakify
    #if DEBUG
        #if __has_feature(objc_arc)
        #define weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
        #else
        #define weakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
        #endif
    #else
        #if __has_feature(objc_arc)
        #define weakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
        #else
        #define weakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
        #endif
    #endif
#endif

#ifndef strongify
    #if DEBUG
        #if __has_feature(objc_arc)
        #define strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
        #else
        #define strongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
        #endif
    #else
        #if __has_feature(objc_arc)
        #define strongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
        #else
        #define strongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
        #endif
    #endif
#endif

#ifdef DEBUG
    #define NSLog(FORMAT, ...) fprintf(stderr, "[%s][%d行] %s\n", [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat: FORMAT, ## __VA_ARGS__] UTF8String]);
#else
    #define NSLog(FORMAT, ...) nil
#endif


#endif /* StarRdHeader_h */
