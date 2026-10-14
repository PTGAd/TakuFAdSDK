//
//  TKNSourceAdType.h
//  Pods
//
//  Created byttt on 2023/1/29.
//

#ifndef TKNSourceAdType_h
#define TKNSourceAdType_h

typedef enum : NSUInteger {
    TKNAdUnknown,           // 未知的广告源
    TKNAdCSJ,               // 穿山甲
    TKNAdGDT,               // 广点通
    TKNAdKS,                // 快手
    TKNAdFancy,             // TKNFAPI
    TKNAdJD,                // 京东
    TKNADMY,                // 美约
    TKNAdUbixMerak,         // ubix 自有预算
    TKNAdOneAd
} TKNAdSourceType;


#endif /* TKNSourceAdType_h */
