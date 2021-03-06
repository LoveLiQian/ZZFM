//
//  DNPageChannelStyle.m
//  Donews
//
//  Created by Jamie on 2017/4/19.
//  Copyright © 2017年 donews. All rights reserved.
//

#import "DNPageChannelStyle.h"

@implementation DNPageChannelStyle
- (instancetype)init
{
    self = [super init];
    if (self) {
        
        _showLine = NO;
        _shadowCover = NO;
        _showExtraButton = NO;
        _showBottomLine = NO;
        _scrollTitle = YES;
        _adjustCoverOrLineWidth = NO;
        _titleMargin = 15.0;
        _titleFont = [UIFont systemFontOfSize:17.0];
        _titleBigScale = 1.2;
        _channelBackgroundColor = [UIColor colorWithRed:248.0/255.0 green:249.0/255.0 blue:249.0/255.0 alpha:1.0];
        _extraButtonBackgroundColor = _channelBackgroundColor;
        _bottomLineBackgroundColor = [UIColor colorWithRed:0.0/255.0 green:0.0/255.0 blue:0.0/255.0 alpha:1.0];
        _normalTitleColor = [UIColor colorWithRed:51.0/255.0 green:51.0/255.0 blue:51/255.0 alpha:1.0];
        _selectedTitleColor = [UIColor colorWithRed:231.0/255.0 green:5.0/255.0 blue:5/255.0 alpha:1.0];
        _scrollLineColor = _selectedTitleColor;
        /** 滚动视图背景颜色 */
//        _pageViewBackgroundColor = [UIColor colorWithRed:0.0/255.0 green:0.0/255.0 blue:0.0/255.0 alpha:1.0];
        _pageViewBackgroundColor = [UIColor colorWithRed:36.0/255.0 green:36.0/255.0 blue:36.0/255.0 alpha:1.0];
        _channelHeight = 44.0;
        _scrollLineHeight = 2.0;
        _bottomLineHeight = 0.5;
        _notificationChannelClickName = @"DNPageNotificationChannelClick";
    }
    return self;
}
@end
