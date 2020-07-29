//
//  StarRdCatalogCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdCatalogCell : UITableViewCell

@property (nonatomic, copy, readonly) NSDictionary *preDic;
@property (nonatomic, strong, readonly) UILabel *labTitle;

- (void)setCellInfoWithDic:(NSDictionary *)dic;
- (void)setCellInfoWithSubscriDic:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
