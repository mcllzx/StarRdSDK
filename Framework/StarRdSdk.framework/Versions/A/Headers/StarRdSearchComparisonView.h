//
//  StarRdSearchComparisonView.h
//  hongyanreader
//
//  Created by SJQ on 2020/2/20.
//  Copyright © 2020 杭州涂涂星信息科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, HYShowAlertSubscriType) {
    HYShowAlertSubscriType_ingNoone = 0,                 //分析中,一条数据没有
    HYShowAlertSubscriType_ingData,                      //分类中,已经有数据了
    HYShowAlertSubscriType_enedSuccess,                  //分析结束,数据加载完成
    HYShowAlertSubscriType_enedFails,                    //分析结束,数据获取失败
};


@interface StarRdSearchComparisonView : UIView

- (instancetype)initWithComparisonAlert;

@property (nonatomic, copy) void(^allDataLoadComplete)(NSArray *dataList, NSInteger index);//全部数据加载完成
@property (nonatomic, copy) void(^clickCellBlock)(NSString *linkStr, NSInteger index, BOOL isSubSearchListData);//转码列表点击
@property (nonatomic, copy) dispatch_block_t adviseClickBlock;
@property (nonatomic, copy) dispatch_block_t addGroudClickBlock;

@property (nonatomic, assign) BOOL isShowInWindown;             //是否显示在屏幕上(只关注frame,不关心hidden情况)
@property (nonatomic, assign) HYShowAlertSubscriType subscriDataType;               //数据分析状态

//设置头部显示数据
- (void)setHeadShowData:(NSInteger)cindex keyWords:(NSString *)keyWords;

//转码搜索页面JS匹配数据
- (void)updateSubscriDataWith:(BOOL)isLoaded jsList:(NSArray *)list;
//设置完整数据,数据以及全部加装完毕更新视图
- (void)updateAllSubscriDataWith:(NSArray *)data;



//添加到界面上
- (void)showAlert;

//展示分析中视图
- (void)showAnaying;

//隐藏到底部
- (void)disMissAlert;

//点击内部转码隐藏
- (void)clickDismiss;

//隐藏到屏幕外
- (void)hiddenAlert;

//重新回到屏幕内
- (void)showWindownAlert;

//移除
- (void)removeAlert;

@end

NS_ASSUME_NONNULL_END
