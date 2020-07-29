//
//  StarRdReaderToolView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderToolView : UIView

@property (nonatomic, weak) UIViewController *preViewController;
@property (nonatomic, assign) NSInteger preBookID;
@property (nonatomic, assign) NSInteger preChapterID;

@property (nonatomic, copy) void (^didHeadBtnClick)(NSInteger btnTag, UIButton *btn);

@property (nonatomic, copy) NSString *bookName;
@property (nonatomic, assign) BOOL isAddToShelf;
@property (nonatomic, copy) NSString *downloadTitle;

- (void)show;

@end

NS_ASSUME_NONNULL_END
