//
//  ZFMFontManager.h
//  ZZFM
//
//  Created by donews on 2018/8/14.
//  Copyright © 2018年 donews. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ZFMFontManager : NSObject

/** PingFangSC-Medium 11号字 */
@property (nonatomic, readonly, copy) UIFont *size11PingFangSC_Medium;
/** PingFangSC-Medium 12号字 */
@property (nonatomic, readonly, copy) UIFont *size12PingFangSC_Medium;
/** PingFangSC-Medium 14号字 */
@property (nonatomic, readonly, copy) UIFont *size14PingFangSC_Medium;
/** PingFangSC-Medium 15号字 */
@property (nonatomic, readonly, copy) UIFont *size15PingFangSC_Medium;
/** PingFangSC-Medium 16号字 */
@property (nonatomic, readonly, copy) UIFont *size16PingFangSC_Medium;
/** PingFangSC-Medium 17号字 */
@property (nonatomic, readonly, copy) UIFont *size17PingFangSC_Medium;
/** PingFangSC-Medium 18号字 */
@property (nonatomic, readonly, copy) UIFont *size18PingFangSC_Medium;
/** PingFangSC-Medium 19号字 */
@property (nonatomic, readonly, copy) UIFont *size19PingFangSC_Medium;
/** PingFangSC-Medium 36号字 */
@property (nonatomic, readonly, copy) UIFont *size36PingFangSC_Medium;
/** PingFangSC-Medium 50号字 */
@property (nonatomic, readonly, copy) UIFont *size50PingFangSC_Medium;


/** PingFangSC-Regular 10号字 */
@property (nonatomic, readonly, copy) UIFont *size10PingFangSC_Regular;
/** PingFangSC-Regular 11号字 */
@property (nonatomic, readonly, copy) UIFont *size11PingFangSC_Regular;
/** PingFangSC-Regular 12号字 */
@property (nonatomic, readonly, copy) UIFont *size12PingFangSC_Regular;
/** PingFangSC-Regular 13号字 */
@property (nonatomic, readonly, copy) UIFont *size13PingFangSC_Regular;
/** PingFangSC-Regular 14号字 */
@property (nonatomic, readonly, copy) UIFont *size14PingFangSC_Regular;
/** PingFangSC-Regular 15号字 */
@property (nonatomic, readonly, copy) UIFont *size15PingFangSC_Regular;
/** PingFangSC-Regular 16号字 */
@property (nonatomic, readonly, copy) UIFont *size16PingFangSC_Regular;
/** PingFangSC-Regular 17号字 */
@property (nonatomic, readonly, copy) UIFont *size17PingFangSC_Regular;
/** PingFangSC-Regular 18号字 */
@property (nonatomic, readonly, copy) UIFont *size18PingFangSC_Regular;
/** PingFangSC-Regular 19号字 */
@property (nonatomic, readonly, copy) UIFont *size19PingFangSC_Regular;
/** PingFangSC-Regular 20号字 */
@property (nonatomic, readonly, copy) UIFont *size20PingFangSC_Regular;

@property (nonatomic, readonly, copy) NSString *fontSizeTabBar;
@property (nonatomic, readonly, copy) NSString *fontSizeNavTitle;

+ (instancetype)manager;

@end
