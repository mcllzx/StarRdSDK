//
//  StarRdBannerTableViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2021/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdBannerTableViewCell : UITableViewCell

@property (nonatomic, copy) void (^didLoadAd)(BOOL sucess);
@property (nonatomic, copy) void (^didClick)(void);
@property (nonatomic, copy) void (^didCloseClick)(void);

- (void)setBannerADWithController:(UIViewController *)conVC ansSoltID:(NSString *)sloID;

+ (CGFloat)cellHeight;

@end

NS_ASSUME_NONNULL_END
