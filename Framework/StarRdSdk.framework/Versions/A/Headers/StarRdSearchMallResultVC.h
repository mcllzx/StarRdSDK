//
//  StarRdSearchMallResultVC.h
//  StarRdSdk
//
//  Created by 魔厨开发 on 2021/6/9.
//

#import "StarRdBaseViewController.h"
#import "JXCategoryView.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ResultType) {
    ResultTypeTop,
    ResultTypeMiddle
};

@interface StarRdSearchMallResultVC : StarRdBaseViewController<JXCategoryListContentViewDelegate>

@property (nonatomic, copy) NSString *searchKeyWords;       //搜索关键字
@property (nonatomic, assign) ResultType type;
@end

NS_ASSUME_NONNULL_END
