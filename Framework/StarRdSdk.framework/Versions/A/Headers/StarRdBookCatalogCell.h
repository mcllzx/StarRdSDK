//
//  StarRdBookCatalogCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdBookCatalogCell : UICollectionViewCell

@property (nonatomic, strong, readonly) UILabel *labChapter;
@property (nonatomic, strong, readonly) UILabel *labSta;

+ (CGSize)itemSize;

@end

NS_ASSUME_NONNULL_END
