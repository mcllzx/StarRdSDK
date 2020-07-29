//
//  StarRdNativeAdCollectionViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/28.
//

#import <UIKit/UIKit.h>
#import "XCSAdTemplateNativeView.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdNativeAdCollectionViewCell : UICollectionViewCell

@property (nonatomic, copy) void (^didLoadAd)(BOOL sucess);
@property (nonatomic, copy) void (^didClick)(void);

@property (nonatomic, strong) XCSAdTemplateNativeView *navtionView;


@end

NS_ASSUME_NONNULL_END
