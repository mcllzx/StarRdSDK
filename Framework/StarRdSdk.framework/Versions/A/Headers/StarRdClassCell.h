//
//  StarRdClassCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdClassCell : UICollectionViewCell

@property (nonatomic, copy) NSDictionary *preDic;

- (void)setCellInfoWithDic:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
