//
//  ZFMListenListRequest.h
//  ZZFM
//
//  Created by donews on 2018/9/18.
//  Copyright © 2018年 donews. All rights reserved.
//

#import "ZFMBaseRequest.h"

@interface ZFMListenListRequest : ZFMBaseRequest

@property (nonatomic, copy) NSString *ts;
@property (nonatomic, assign) NSUInteger pageId;
@property (nonatomic, assign) NSUInteger pageSize;

@end
