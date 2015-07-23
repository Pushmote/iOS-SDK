//
//  Pushmote.h
//  PushmoteSDK
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
@end
