//
//  StarRdSearchWebViewController.h
//  hongyanreader
//
//  Created by SJQ on 2020/1/2.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import "StarRdBaseViewController.h"
#import <JXCategoryView/JXCategoryView.h>

NS_ASSUME_NONNULL_BEGIN

//网页搜索视图

@interface StarRdSearchWebViewController : StarRdBaseViewController <JXCategoryListContentViewDelegate>

@property (nonatomic, assign) NSInteger cindex;
@property (nonatomic, assign) BOOL isShowTip;           //是否显示弹框
@property (nonatomic, copy) NSString *keyWords;
@property (nonatomic, copy) NSString *locationJsStr;        //位置JS信息

@property (nonatomic, copy) void(^webLoadSuccessBlock)(NSArray *jsArr,NSInteger cindex);
@property (nonatomic, copy) void(^webLocationSuccessBlock)(BOOL isHaveData);

- (void)showWebViewWith:(NSString *)searchURL  searchKey:(NSString *)searchKey;

@end

NS_ASSUME_NONNULL_END
