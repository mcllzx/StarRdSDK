//
//  StarRdDownloadManager.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdDownloadManager : NSObject

//下载字体
+(void)downloadURL:(NSString *) downloadURL progress:(void (^)(NSProgress *downloadProgress))progress destination:(void (^)(NSURL *targetPath))destination failure:(void(^)(NSError *error))faliure;

@end

NS_ASSUME_NONNULL_END
