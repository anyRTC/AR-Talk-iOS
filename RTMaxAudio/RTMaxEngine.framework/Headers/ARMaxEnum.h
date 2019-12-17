//
//  ARMaxEnum.h
//  RTMaxEngine
//
//  Created by zjq on 2019/1/17.
//  Copyright © 2019 derek. All rights reserved.
//

#ifndef ARMaxEnum_h
#define ARMaxEnum_h

#import "ARCommonEnum.h"

typedef NS_ENUM(NSInteger,ARMaxCode) {
    ARMax_OK = 0,                           // 正常
    ARMax_UNKNOW = 1,                       // 未知错误
    ARMax_EXCEPTION = 2,                    // SDK调用异常
    ARMax_EXP_UNINIT = 3,                   // SDK未初始化
    ARMax_EXP_PARAMS_INVALIDE = 4,          // 参数非法
    ARMax_EXP_NO_NETWORK = 5,               // 没有网络链接
    ARMax_EXP_NOT_FOUND_CAMERA = 6,         // 没有找到摄像头设备
    ARMax_EXP_NO_CAMERA_PERMISSION = 7,     // 没有打开摄像头权限
    ARMax_EXP_NO_AUDIO_PERMISSION = 8,      // 没有音频录音权限
    ARMax_EXP_NOT_SUPPORT_WEBRTC = 9,       // 浏览器不支持原生的webrtc
    
    ARMax_NET_ERR = 100,                    // 网络错误
    ARMax_NET_DISSCONNECT = 101,            // 网络断开
    ARMax_LIVE_ERR    = 102,                // 直播出错
    ARMax_EXP_ERR = 103,                    // 异常错误
    ARMax_EXP_Unauthorized = 104,           // 服务未授权(仅可能出现在私有云项目)
    
    ARMax_BAD_REQ = 201,                    // 服务不支持的错误请求
    ARMax_AUTH_FAIL = 202,                  // 认证失败
    ARMax_NO_USER = 203,                    // 此开发者信息不存在
    ARMax_SVR_ERR = 204,                    // 服务器内部错误
    ARMax_SQL_ERR = 205,                    // 服务器内部数据库错误
    ARMax_ARREARS = 206,                    // 账号欠费
    ARMax_LOCKED = 207,                     // 账号被锁定
    ARMax_SERVER_NOT_OPEN = 208,            // 服务未开通
    ARMax_ALLOC_NO_RES = 209,               // 没有服务器资源
    ARMax_SERVER_NOT_SURPPORT = 210,        // 不支持的服务
    ARMax_CHECK_USER_TOKEN_ERR = 211,       // 验证用户的token发生错误
    ARMax_AUTH_TIMEOUT = 212,               // 验证超时
    ARMax_NEED_VERTIFY_TOKEN = 213,         // 需要验证userToken
    ARMax_WEB_DOMIAN_ERROR = 214,           // Web应用的域名验证失败
    ARMax_IOS_BUNDLE_ID_ERROR = 215,        // iOS应用的BundleId验证失败
    ARMax_ANDROID_PKG_NAME_ERROR = 216,     // Android应用的包名验证失败
    
    ARMax_APPLY_SVR_ERR = 800,              // 申请麦但是服务器异常 (没有MCU服务器,暂停申请)
    ARMax_APPLY_BUSY = 801,                 // 当前你正在忙
    ARMax_APPLY_NO_PRIO = 802,              // 当前麦被占用 (有人正在说话切你的权限不够)
    ARMax_APPLY_INITING = 803,              // 正在初始化中 (自身的通道没有发布成功,不能申请)
    ARMax_APPLY_ING = 804,                  // 等待上麦
    ARMax_APPLY_TIMEOUT = 805,              // 上麦超时
    ARMax_ROBBED = 810,                     // 麦被抢掉了
    ARMax_BREAKED = 811,                    // 麦被释放了
    ARMax_RELEASED_BY_P2P = 812,            // 麦被释放了，因为要对讲
    ARMax_TIMEOUT = 813,                    // 麦因为超时被释放了(服务端返回)
    ARMax_OVER_TIME_LIMIT = 814,            // 上麦超过本地时间限制
    ARMax_BAD_NETWORK = 815,                // 上麦因为网络差被释放了
    ARMax_EXCEPTION_OFF = 816,              // 异常下麦
    ARMax_P2P_OFFLINE = 820,                // 强插时，对方可能不在线了或异常离线
    ARMax_P2P_BUSY = 821,                   // 强插时，对方正忙
    ARMax_P2P_NOT_TALK = 822,               // 强插时，对方不在麦上
    ARMax_V_MON_OFFLINE = 830,              // 视频监看时，对方不在线，或下线了
    ARMax_V_MON_GRABED = 831,               // 视频监看被抢占了
    ARMax_V_MON_BUSY = 832,                 // 视频监看对方忙
    ARMax_V_MON_REJECT = 833,               // 视频监看对方拒绝
    ARMax_CALL_OFFLINE = 840,               // 对方不在线或掉线了
    ARMax_CALL_NO_PRIO = 841,               // 发起呼叫时自己有其他业务再进行(资源被占用)
    ARMax_CALL_NOT_FOUND = 842,             // 会话不存在
    ARMax_CALL_FORCE_OFF = 843,             // 会话被强拆
    
};


#endif /* ARMaxEnum_h */
