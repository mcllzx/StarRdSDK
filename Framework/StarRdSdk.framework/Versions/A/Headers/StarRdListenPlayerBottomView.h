//
//  StarRdListenPlayerBottomView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListenPlayerBottomView : UIView

@property (nonatomic, strong) UIButton *playBtn;

@property (nonatomic, copy) dispatch_block_t catalogClickBlock;         //点击目录
@property (nonatomic, copy) dispatch_block_t lastVoiceBlock;            //上一曲
@property (nonatomic, copy) dispatch_block_t nextVoiceBlock;            //下一曲
@property (nonatomic, copy) dispatch_block_t lickClickBlock;            //点击喜欢
@property (nonatomic, copy) void(^clickPlayBtnAction)(BOOL isPlaying);  //点击播放按钮
@property (nonatomic, copy) void(^clickSlideProgress)(CGFloat progress);  //拖动进度

@property (nonatomic, assign) BOOL isJoin;

//更新进度
- (void)updateProgressWith:(NSTimeInterval)nowTime allTime:(NSTimeInterval)allTime;


@end

NS_ASSUME_NONNULL_END
