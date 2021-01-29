//
//  StarRdReaderVerticalCell.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderVerticalCell : UICollectionViewCell

@property (nonatomic, copy, readonly) NSString *preStr;
@property (nonatomic, strong, readonly) UILabel *labTitle;
- (void)setCellInfoWithStr:(NSString *)str chapterName:(NSString *)chapterName;

@end

NS_ASSUME_NONNULL_END
