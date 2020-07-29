//
//  StarRdBookTagCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdBookTagCell : UICollectionViewCell

@property (nonatomic, strong) UILabel *labTag;

+ (CGSize)itemSize:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
