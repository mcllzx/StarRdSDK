//
//  StarRdNetData.h
//  StarRdSdk
//
//  Created by SJQ on 2020/12/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StarRdNetData : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic, copy) NSString *errMessage;
@property (nonatomic, strong) id retData;
@property (nonatomic, copy) NSString *code;

- (instancetype)initWithData:(id)data;

@end

NS_ASSUME_NONNULL_END
