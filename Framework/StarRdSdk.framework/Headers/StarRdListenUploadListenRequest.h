//
//  StarRdListenUploadListenRequest.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/17.
//

#import "StarRdMCBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdListenUploadListenRequest : StarRdMCBaseRequest

@property (nonatomic, assign) NSTimeInterval ts;                        //播放停止时间,
@property (nonatomic, assign) NSInteger channelId;                      //专辑ID
@property (nonatomic, assign) NSInteger programId;                      //节目ID
@property (nonatomic, assign) NSTimeInterval playDuration;              //本次播放时长
@property (nonatomic, assign) NSTimeInterval position;                  //停放停止的位置(距离节目开头的秒数)
@property (nonatomic, assign) NSInteger programIndex;                   //节目索引


@end

NS_ASSUME_NONNULL_END
