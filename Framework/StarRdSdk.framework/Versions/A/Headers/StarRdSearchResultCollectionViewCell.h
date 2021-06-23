//
//  StarRdSearchResultCollectionViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSearchResultCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong, readonly) NSDictionary *preDic;
@property (nonatomic, copy) void (^didSourceBtnClick)(void);
- (void)setCellInfoWithDic:(NSDictionary *)dic isReaderBook:(BOOL)isReadBook;
+ (CGSize)itemSizeWithDic:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
