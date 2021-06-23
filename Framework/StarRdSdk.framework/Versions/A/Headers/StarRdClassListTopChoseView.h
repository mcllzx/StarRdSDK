//
//  StarRdClassListTopChoseView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdClassListTopChoseView : UIView

@property (nonatomic, copy) NSArray<NSString *> *preDataAry;
@property (nonatomic, copy) NSString *preChosenStr;
@property (nonatomic, assign) CGFloat preCellHeight;

@property (nonatomic, copy) void (^didChose)(NSString *txt, NSInteger idx);

- (void)update;

@end

NS_ASSUME_NONNULL_END
