//
//  Weather.h
//  WatchWeather
//
//  Created by 海玩 on 16/4/19.
//  Copyright © 2016年 haiwan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Day.h"

typedef enum{
    Sunny,
    Cloudy,
    Rain,
    Snow
}State;

@interface Weather : NSObject

@property (nonatomic, assign) State state;

@property (nonatomic, strong) Day *day;

@property (nonatomic, assign) NSInteger highTemperature;

@property (nonatomic, assign) NSInteger lowTemperature;

@end
