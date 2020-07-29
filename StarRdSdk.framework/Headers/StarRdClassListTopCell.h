//
//  StarRdClassListTopCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdClassListTopCell : UITableViewCell

@property (nonatomic, strong, readonly) UILabel *labTitle;
@property (nonatomic, strong, readonly) UIView *lineView;
@property (nonatomic, assign) BOOL chosen;

@end

NS_ASSUME_NONNULL_END
