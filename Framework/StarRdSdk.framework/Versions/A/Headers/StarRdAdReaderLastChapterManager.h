//
//  StarRdAdReaderLastChapterManager.h
//  StarRdSdk
//
//  Created by SJQ on 2021/3/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdAdReaderLastChapterManager : NSObject

- (instancetype)initWithVC:(UIViewController *)vc;

@property (nonatomic, copy) void(^clickNavtiveAdBlock)(NSString *type);
@property (nonatomic, copy) void(^clickNavtiveAdCloseBlock)(NSString *type);

///最后一章加载信息流
- (void)loadNavtiveAdWithLastChapter;

///获取最后一章信息流广告
- (id)getLastChapterNavtionAdView;

@end

NS_ASSUME_NONNULL_END
