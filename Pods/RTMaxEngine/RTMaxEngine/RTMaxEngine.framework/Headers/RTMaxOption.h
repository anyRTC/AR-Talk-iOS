//
//  RTMaxOption.h
//  RTMaxEngine
//
//  Created by zjq on 2018/8/23.
//  Copyright © 2018年 derek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RTCCommon.h"

@interface RTMaxOption : NSObject
/**
 使用默认配置生成一个 RTMaxOption 对象
 
 @return 生成的 RTMaxOption 对象
 */
+ (nonnull RTMaxOption *)defaultOption;
/**
 是否是前置摄像头
 说明：默认前置摄像头
 */
@property (nonatomic, assign) BOOL isFont;

/**
 设置推流视频质量
 AnyRTCVideoQuality_Low1 = 0,      // 320*240 - 128kbps
 AnyRTCVideoQuality_Low2,          // 352*288 - 256kbps
 AnyRTCVideoQuality_Low3,          // 352*288 - 384kbps
 AnyRTCVideoQuality_Medium1,       // 640*480 - 384kbps
 AnyRTCVideoQuality_Medium2,       // 640*480 - 512kbps
 AnyRTCVideoQuality_Medium3,       // 640*480 - 768kbps
 AnyRTCVideoQuality_Height1,       // 960*540 - 768kbps
 AnyRTCVideoQuality_Height2,       // 1280*720 - 1024kbps
 AnyRTCVideoQuality_Height3,       // 1920*1080 - 2048kbps
 
 说明:　默认：AnyRTCVideoQuality_Medium3
 */
@property (nonatomic, assign) AnyRTCVideoQualityModel videoMode;
/**
 视频方向：默认：RTC_SCRN_Portrait竖屏
 */
@property (nonatomic, assign) RTCScreenOrientation videoScreenOrientation;

/**
 自动旋转：默认为NO
 说明:设置为YES；这里只支持 left 变 right  portrait 变 portraitUpsideDown
 */
@property (nonatomic, assign) BOOL autorotate;

@end
