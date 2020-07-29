//
//  UINavigationBar+StarRdComment.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UINavigationBar (StarRdComment)

/**
 更改导航栏颜色和图片

 @param color 颜色
 @param barImage 图片
 @param opaque 样式，YES:状态字体为白色 NO:状态字体为黑色(默认)
 */
- (void)starRd_navBarBackGroundColor:(UIColor *_Nullable)color image:(UIImage *_Nullable)barImage isOpaque:(BOOL)opaque;

/**
 更改透明度

 @param alpha 导航栏透明度
 @param opaque 样式，YES:状态字体为白色 NO:状态字体为黑色(默认)
 */
- (void)starRd_navBarAlpha:(CGFloat)alpha isOpaque:(BOOL)opaque;

/**
 导航栏背景高度
 注意*这里并没有改导航栏高度，只是改了自定义背景高度

 @param height 高度
 @param opaque 样式，YES:状态字体为白色 NO:状态字体为黑色(默认)
 */
- (void)starRd_navBarMyLayerHeight:(CGFloat)height isOpaque:(BOOL)opaque;

/**
 隐藏底线
 */
- (void)starRd_navBarBottomLineHidden:(BOOL)hidden;

//还原回系统导航栏
- (void)starRd_navBarToBeSystem;

@end

#pragma mark -- 自定义导航栏层
@interface MyNavView :UIView

@property (nonatomic, assign) CGFloat   starRd_alpha;
@property (nonatomic, assign) BOOL      hiddenBottomLine;
@property (nonatomic, strong) UIColor   * _Nullable starRd_backColor;
@property (nonatomic, strong) UIImage   * _Nullable starRd_backImage;

@end

NS_ASSUME_NONNULL_END
