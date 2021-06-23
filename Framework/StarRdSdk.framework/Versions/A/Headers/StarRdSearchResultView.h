//
//  StarRdSearchResultView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSearchResultView : UICollectionView

@property (nonatomic, copy) void (^didResultSelect)(NSDictionary *dic);
@property (nonatomic, strong) NSArray *resultAry;

- (void)setViewDataWith:(NSArray *)resultAry isReaderBook:(BOOL)isReadBook;

@end

NS_ASSUME_NONNULL_END
