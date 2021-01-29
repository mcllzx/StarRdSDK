//
//  StarRdSearchSwiftView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdSearchSwiftView : UIView

@property (nonatomic, assign) NSInteger selectIndex;            //0-阅读历史,1-转码记录
@property (nonatomic, copy) void(^functionBtnClickBlock)(NSInteger selectIndex);

@end

NS_ASSUME_NONNULL_END
