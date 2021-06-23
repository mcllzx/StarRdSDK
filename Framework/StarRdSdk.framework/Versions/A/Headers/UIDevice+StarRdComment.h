//
//  UIDevice+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (StarRdComment)

#pragma mark - Device Information

/// 系统版本号 (e.g. 8.1)
+ (double)starRd_systemVersion;

/// 是否是iPad
@property (nonatomic, readonly) BOOL starRd_isPad;

/// 是否是模拟器
@property (nonatomic, readonly) BOOL starRd_isSimulator;

/// 是否越狱
@property (nonatomic, readonly) BOOL starRd_isJailbroken;

/// 能否打电话
@property (nonatomic, readonly) BOOL starRd_canMakePhoneCalls NS_EXTENSION_UNAVAILABLE_IOS("");

/// 系统启动时间(设备开机时间)
@property (nonatomic, readonly) NSDate *starRd_systemUptime;

#pragma mark - Disk Space

/// 总的磁盘空间字节 (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_diskSpace;

/// 空闲磁盘空间字节 (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_diskSpaceFree;

/// 已经使用磁盘空间字节 (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_diskSpaceUsed;

#pragma mark - Memory Information

/// 总的物理内存字节 (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_memoryTotal;

/// 已经使用的内存,active+inactive+wired (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_memoryUsed;

/// 空闲的内存 (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_memoryFree;

/// Acvite的内存 (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_memoryActive;

/// Inactive的内存 (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_memoryInactive;

/// Wired的内存 (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_memoryWired;

/// Purgable的内存 (错误情况返回-1)
@property (nonatomic, readonly) int64_t starRd_memoryPurgable;

#pragma mark - CPU Information

/// 几核CPU
@property (nonatomic, readonly) NSUInteger starRd_cpuCount;

/// 当前CPU使用率, 1.0 means 100% (错误情况返回-1)
@property (nonatomic, readonly) float starRd_cpuUsage;

/// 每核的使用率, 1.0 means 100% (错误情况返回-1)
@property (nullable, nonatomic, readonly) NSArray<NSNumber *> *starRd_cpuUsagePerProcessor;

#pragma mark - 设备型号

/**
 获取设备型号, e.g. iPhone 2G (A1203)
 */
+ (NSString *)starRd_getCurrentDeviceModel;

/**
 获取设备型号(精简), e.g. iPhone 2G
 */
+ (NSString *)starRd_getCurrentDeviceShortModel;

/**
 获取屏幕密度
 */
+ (NSInteger)starRd_getCurrentDevicePPI;

+ (NSString *)starRd_mc_uuid;

@end

NS_ASSUME_NONNULL_END

#ifndef starRd_kSystemVersion
#define starRd_kSystemVersion [UIDevice starRd_systemVersion]
#endif

#ifndef starRd_kiOS7Later
#define starRd_kiOS7Later (starRd_kSystemVersion >= 7)
#endif

#ifndef starRd_kiOS8Later
#define starRd_kiOS8Later (starRd_kSystemVersion >= 8)
#endif

#ifndef starRd_kiOS9Later
#define starRd_kiOS9Later (starRd_kSystemVersion >= 9)
#endif

#ifndef starRd_kiOS10Later
#define starRd_kiOS10Later (starRd_kSystemVersion >= 10)
#endif

#ifndef starRd_kiOS11Later
#define starRd_kiOS11Later (starRd_kSystemVersion >= 11)
#endif

