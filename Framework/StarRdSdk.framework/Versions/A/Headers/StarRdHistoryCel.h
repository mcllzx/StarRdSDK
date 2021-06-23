//
//  StarRdHistoryCel.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, StarRdHistoryCellType) {
    StarRdHistoryCellType_Open = 0,
    StarRdHistoryCellType_Join,
    StarRdHistoryCellType_Wait,
    StarRdHistoryCellType_Select,
    StarRdHistoryCellType_hidden
};

@interface StarRdHistoryCel : UITableViewCell

@property (nonatomic, copy, readonly) NSDictionary *preDic;
@property (nonatomic, assign) StarRdHistoryCellType type;
@property (nonatomic, copy) void (^didOpenBtnClick)(void);
@property (nonatomic, copy) void (^didJoinBtnClick)(void);

- (void)setHistoryType:(StarRdHistoryCellType)type isListen:(BOOL)isListen;

- (void)setCellInfoWithDic:(NSDictionary *)dic;

- (void)setCellListenDataWith:(NSDictionary *)dic;


@end

NS_ASSUME_NONNULL_END
