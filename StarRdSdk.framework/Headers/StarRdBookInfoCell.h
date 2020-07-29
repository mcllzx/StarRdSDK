//
//  StarRdBookInfoCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdBookInfoCell : UICollectionViewCell

+ (CGSize)minItemSizeForText:(NSString *)txt;
+ (CGSize)maxItemSizeForText:(NSString *)txt;
- (void)setCellInfoWithText:(NSString *)txt showAll:(BOOL)isShowAll;

@end

NS_ASSUME_NONNULL_END
