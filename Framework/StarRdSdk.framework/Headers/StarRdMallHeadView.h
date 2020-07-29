//
//  StarRdMallHeadView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdMallHeadView : UICollectionReusableView

@property (nonatomic, copy) dispatch_block_t didMoreBtnClick;

@property (nonatomic, strong) UILabel *labTitle;
@property (nonatomic, strong) UIButton *btnMore;

@end

NS_ASSUME_NONNULL_END
