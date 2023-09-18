//
//  VidaSilentLivenessCommon.h
//  VidaSilentLiveness
//
//  Created by Maheep on 09/02/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#ifndef VidaSilentLivenessCommon_h
#define VidaSilentLivenessCommon_h


#define kVidaColorWithRGB(rgbValue)                                         \
    [UIColor colorWithRed:((float) ((rgbValue & 0xFF0000) >> 16)) / 255.0 \
                    green:((float) ((rgbValue & 0xFF00) >> 8)) / 255.0    \
                     blue:((float) (rgbValue & 0xFF)) / 255.0             \
                    alpha:1.0]

#define kVidaColorWithRGBA(rgbValue, a)                                     \
    [UIColor colorWithRed:((float) ((rgbValue & 0xFF0000) >> 16)) / 255.0 \
                    green:((float) ((rgbValue & 0xFF00) >> 8)) / 255.0    \
                     blue:((float) (rgbValue & 0xFF)) / 255.0             \
                    alpha:a]

#define kVidaScreenWidth [UIScreen mainScreen].bounds.size.width
#define kVidaScreenHeight [UIScreen mainScreen].bounds.size.height

#define KVidaStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define KVidaNavigationBarHeight 44.0

#define IS_IPHONE ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)

#define kVidaViewTagBase 1000


#endif /* VidaSilentLivenessCommon_h */
