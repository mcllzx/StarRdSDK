//
//  StarRdAccountManager.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdAccountManager : NSObject

+ (BOOL)isLogin;

+ (NSString *)session;
+ (void)setSession:(NSString *)session;

+ (NSDictionary *)userInfo;
+ (void)setUserInfo:(NSDictionary *)usrDic;

+ (void)logout;

+ (NSString *)nickname;
+ (void)setNickname:(NSString *)nickname;

+ (NSString *)avatar;
+ (void)setAvatar:(NSString *)imgUrl;

+ (NSInteger)sex;
+ (void)setSex:(NSInteger)sex;

+ (NSString *)username;
+ (void)setUsername:(NSString *)username;

///记录用户有没有下载楷体字体
+ (BOOL)haveDowLoadKaiTiFont;
+ (void)setHaveDowLoadKaiTiFont:(BOOL)fontSet;

///记录用户有没有下载隶书字体
+ (BOOL)haveDowLoadLiShuFont;
+ (void)setHaveDowLoadLiShuFont:(BOOL)fontSet;

///记录用户有没有下载细圆字体
+ (BOOL)haveDowLoadXiYuanFont;
+ (void)setHaveDowLoadXiYuanFont:(BOOL)fontSet;

@end

NS_ASSUME_NONNULL_END
