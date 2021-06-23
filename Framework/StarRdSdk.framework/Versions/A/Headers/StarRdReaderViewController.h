//
//  StarRdReaderViewController.h
//  StarRdSdk
//
//  Created by SJQ on 2020/7/20.
//

#import <StarRdSdk/StarRdSdk.h>
#import "StarRdBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface StarRdReaderViewController : StarRdBaseViewController

@property (nonatomic, assign) NSInteger preBookID;
@property (nonatomic, assign) NSInteger preChapterID;

@property (nonatomic, assign) BOOL statusBarHidden;

//17k
@property (nonatomic, assign) NSInteger SDKID;
@property (nonatomic, strong) NSString *bookName;
@property (nonatomic, assign) BOOL isInShelf;
@property (nonatomic, assign) BOOL isFinish;


- (void)reloadChapter;

@end

NS_ASSUME_NONNULL_END
