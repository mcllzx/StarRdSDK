//
//  NSUserDefaults+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSUserDefaults (StarRdComment)

//可序列化保存
- (void)starRd_setArchived:(id)obj forKey:(NSString *)defaultName;
//可序列化提取
- (id)starRd_archivedForKey:(NSString *)defaultName;

@end

NS_ASSUME_NONNULL_END
