//
//  UIApplication+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIApplication (StarRdComment)

/// "Documents"在沙盒中文件夹路径
@property (nonatomic, readonly) NSURL *starRd_documentsURL;
@property (nonatomic, readonly) NSString *starRd_documentsPath;

/// "Caches"在沙盒中文件夹路径
@property (nonatomic, readonly) NSURL *starRd_cachesURL;
@property (nonatomic, readonly) NSString *starRd_cachesPath;

/// "Library"在沙盒中文件夹路径
@property (nonatomic, readonly) NSURL *starRd_libraryURL;
@property (nonatomic, readonly) NSString *starRd_libraryPath;

/// Application's Bundle Name (show in SpringBoard).
@property (nullable, nonatomic, readonly) NSString *starRd_appBundleName;

/// Application's Bundle ID.  e.g. "com.XXX.MyApp"
@property (nullable, nonatomic, readonly) NSString *starRd_appBundleID;

/// Application's Version.  e.g. "1.2.0"
@property (nullable, nonatomic, readonly) NSString *starRd_appVersion;

/// Application's Build number. e.g. "123"
@property (nullable, nonatomic, readonly) NSString *starRd_appBuildVersion;

/// app是否是盗版(不是从app store下载的)
@property (nonatomic, readonly) BOOL starRd_isPirated;

/// app是否正在被调试
@property (nonatomic, readonly) BOOL starRd_isBeingDebugged;

/// 当前线程内存使用大小 (错误返回-1)
@property (nonatomic, readonly) int64_t starRd_memoryUsage;

/// 当前线程CPU使用率 (错误返回-1);
@property (nonatomic, readonly) float starRd_cpuUsage;

/// 是否是扩展 http://www.cocoachina.com/ios/20140812/9366.html
+ (BOOL)starRd_isAppExtension;

/// 和sharedApplication一样,但是在扩展中返回nil
+ (nullable UIApplication *)starRd_sharedExtensionApplication;

@end

NS_ASSUME_NONNULL_END
