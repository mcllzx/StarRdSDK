//
//  StarRdBannerCollectionViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// banner Collectionviewcell

@interface StarRdBannerCollectionViewCell : UICollectionViewCell

@property (nonatomic, copy) void (^didLoadAd)(BOOL sucess);
@property (nonatomic, copy) void (^didClick)(void);
@property (nonatomic, copy) void (^didCloseClick)(void);

- (void)setBannerADWithController:(UIViewController *)conVC ansSoltID:(NSString *)sloID;

+ (CGSize)cellSize;

@end

NS_ASSUME_NONNULL_END
