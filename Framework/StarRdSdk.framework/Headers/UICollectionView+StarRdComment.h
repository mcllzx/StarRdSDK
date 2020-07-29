//
//  UICollectionView+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define starRd_dequeue_CollectionCell(cls)   ([collectionView starRd_dequeueReusableCell:[cls class] forIndexPath:indexPath])
#define starRd_dequeue_CollectionHeader(cls) ([collectionView starRd_dequeueReusableHeaderView:[cls class] forIndexPath:indexPath])
#define starRd_dequeue_CollectionFooter(cls) ([collectionView starRd_dequeueReusableFooterView:[cls class] forIndexPath:indexPath])

@interface UICollectionView (StarRdComment)

- (void)starRd_registerCell:(nullable Class)cls;
- (__kindof UICollectionViewCell *)starRd_dequeueReusableCell:(nullable Class)cls forIndexPath:(NSIndexPath *)idxPath;

- (void)starRd_registerHeader:(nullable Class)cls;
- (__kindof UICollectionReusableView *)starRd_dequeueReusableHeaderView:(nullable Class)cls forIndexPath:(NSIndexPath *)indexPath;

- (void)starRd_registerFooter:(nullable Class)cls;
- (__kindof UICollectionReusableView *)starRd_dequeueReusableFooterView:(nullable Class)cls forIndexPath:(NSIndexPath *)indexPath;

- (void)starRd_reloadSectionsSafely:(NSIndexSet *)sections;
- (void)starRd_reloadSectionSafely:(NSUInteger)section;

@end

NS_ASSUME_NONNULL_END
