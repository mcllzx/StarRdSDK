//
//  StarRdMallBookCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdMallBookCell : UICollectionViewCell

@property (nonatomic, strong, readonly) NSDictionary *preDic;

- (void)setCellInfoWithDic:(NSDictionary *)dic;

+ (CGSize)itemSize;

@end

NS_ASSUME_NONNULL_END
