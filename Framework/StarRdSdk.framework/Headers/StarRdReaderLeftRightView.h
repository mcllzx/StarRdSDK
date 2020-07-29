//
//  StarRdReaderLeftRightView.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderLeftRightView : UICollectionView

@property (nonatomic, copy) void (^didEmptyViewTouch)(void);
@property (nonatomic, copy) void (^wantToLastChapter)(void);
@property (nonatomic, copy) void (^wantToNextChapter)(void);

@end

NS_ASSUME_NONNULL_END
