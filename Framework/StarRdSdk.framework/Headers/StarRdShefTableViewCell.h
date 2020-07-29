//
//  StarRdShefTableViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StarRdShelfCellType) {
    StarRdShelfCellType_Open = 0,
    StarRdShelfCellType_Wait,
    StarRdShelfCellType_Select,
};

NS_ASSUME_NONNULL_BEGIN

@interface StarRdShefTableViewCell : UITableViewCell

@property (nonatomic, copy, readonly) NSDictionary *preDic;
@property (nonatomic, assign) StarRdShelfCellType type;
@property (nonatomic, copy) void (^didOpenBtnClick)(void);
@property (nonatomic, copy) void (^didJoinBtnClick)(void);

- (void)setCellInfoWithDic:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
