//
//  StarRdListenCatalogTableViewCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListenCatalogTableViewCell : UITableViewCell

- (void)setCellDdata:(NSDictionary *)dict index:(NSInteger)index;

- (void)setCellDdata:(NSDictionary *)dict isSelect:(BOOL)isSelect;

+ (CGFloat)cellheight;


@end

NS_ASSUME_NONNULL_END
