//
//  WeatherClient.m
//  WatchWeather
//
//  Created by 海玩 on 16/4/19.
//  Copyright © 2016年 haiwan. All rights reserved.
//

#import "WeatherClient.h"

@implementation WeatherClient

+ (WeatherClient *)shareManager
{
    static id __shareManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (__shareManager == nil) {
            __shareManager = [[self alloc] init];
        }
    });
    
    return __shareManager;
}

@end
