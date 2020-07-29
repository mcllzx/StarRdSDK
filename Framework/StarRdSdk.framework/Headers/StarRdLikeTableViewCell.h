//
//  StarRdLikeTableViewCell.h
//  AFNetworking
//
//  Created by SJQ on 2020/7/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdLikeTableViewCell : UITableViewCell

@property (nonatomic, strong) UICollectionView *collectionView;

@property (nonatomic, strong) NSArray *itemArray;

+ (CGFloat)cellHeight;

@end

NS_ASSUME_NONNULL_END
