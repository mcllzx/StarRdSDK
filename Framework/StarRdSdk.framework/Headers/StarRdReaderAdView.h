//
//  StarRdReaderAdView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderAdView : UIView

@property (nonatomic, copy) dispatch_block_t againLoadADBlock;
@property (nonatomic, strong) id navtiveAd;

@end

NS_ASSUME_NONNULL_END
