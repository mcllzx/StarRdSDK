//
//  StarRdReaderVerticalView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderVerticalView : UICollectionView

@property (nonatomic, copy) void (^didEmptyViewTouch)(void);

@end

NS_ASSUME_NONNULL_END
