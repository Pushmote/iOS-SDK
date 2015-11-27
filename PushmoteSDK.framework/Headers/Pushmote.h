//
//  Pushmote.h
//  PushmoteSDK
//
//  Created by Taha Ozket on 28/01/15.
//  Copyright (c) 2015 Pushmote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class Pushmote;

@interface Pushmote : NSObject 

+ (void)startWithApplicationId:(NSString*)appId;
+ (void)handleNotification:(UILocalNotification*)notification;
+ (void)setUserProperties:(NSDictionary*)userProperties;
+ (void)simulateAction;

@end
