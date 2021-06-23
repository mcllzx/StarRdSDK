//
//  StarRdMallListenTableViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdMallListenTableViewCell : UITableViewCell

@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) NSArray *itemArray;

+ (CGFloat)cellHeight:(NSArray *)dataArr;

@end

NS_ASSUME_NONNULL_END
