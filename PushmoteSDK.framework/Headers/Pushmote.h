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

@protocol PushmoteActionDelegate
-(void)actionTriggered;
@end


@interface Pushmote : NSObject {
    id <PushmoteActionDelegate> delegate;
}

@property (nonatomic, assign) id <PushmoteActionDelegate> delegate;

+ (void)startWithApplicationId:(NSString*)appId;
+ (void)handleNotification:(UILocalNotification*)notification;
+ (void)simulateAction;
@end
