//
//  StarRdReaderToolHeadView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderToolHeadView : UIView

@property (nonatomic, weak, readonly) UIButton *btnShelf;
@property (nonatomic, weak, readonly) UIButton *btnDetail;
@property (nonatomic, copy) void (^didHeadBtnClick)(NSInteger btnTag, UIButton *btn);
@property (nonatomic, strong) UILabel *bookNameLabel;

@end

NS_ASSUME_NONNULL_END
