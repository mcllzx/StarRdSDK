//
//  StarRdCatalogTopView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdCatalogTopView : UIView

@property (nonatomic, strong, readonly) UILabel *labTitle;
@property (nonatomic, strong, readonly) UIButton *btnSort;
@property (nonatomic, copy) void (^didsortBtnClick)(void);

@end

NS_ASSUME_NONNULL_END
