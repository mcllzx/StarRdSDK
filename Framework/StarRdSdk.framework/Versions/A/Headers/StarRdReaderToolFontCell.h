//
//  StarRdReaderToolFontCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, HYFontBtnShowType) {
    HYFontBtnShowType_useing = 0,              //使用中
    HYFontBtnShowType_needdown,                //待下载
    HYFontBtnShowType_downing,                 //下载中
    HYFontBtnShowType_whiteuse,                //待使用
};


@interface StarRdReaderToolFontCell : UITableViewCell

@property (nonatomic, strong, readonly) UILabel *labTitle;

@property (nonatomic, strong) UIImageView *textImageView;

@property (nonatomic, strong) UIButton *btnUse;
@property (nonatomic, strong) UIButton *imageBtnUse;

@property (nonatomic, copy) void (^didUseBtnClick)(void);

- (void)setFontBtnTitleType:(NSString *)fontName andShowType:(HYFontBtnShowType)type;

@end

NS_ASSUME_NONNULL_END
