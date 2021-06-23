//
//  StarRdClassListTopView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdClassListTopView : UIView

@property (nonatomic, copy) NSArray<NSString *> *preStatusAry;
@property (nonatomic, copy) NSArray<NSString *> *preSubsortAry;

@property (nonatomic, copy) void (^didStatusBtnClick)(NSInteger status);
@property (nonatomic, copy) void (^didSubsortBtnClick)(NSInteger idx);

@end

NS_ASSUME_NONNULL_END
