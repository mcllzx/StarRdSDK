//
//  StarRdMallRecommentTableViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2021/1/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdMallRecommentTableViewCell : UITableViewCell

@property (nonatomic, strong, readonly) NSDictionary *preDic;

- (void)setCellInfoWithDic:(NSDictionary *)dic;

+ (CGFloat)cellHeight;

@end

NS_ASSUME_NONNULL_END
