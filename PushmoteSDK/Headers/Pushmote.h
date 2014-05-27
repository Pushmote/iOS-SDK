#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@class Pushmote;

@protocol PSHDelegate
-(void)beaconHere;
@end

@interface Pushmote : NSObject <CBPeripheralDelegate> {
    dispatch_queue_t backgroundQueue;
}

@property (assign, nonatomic) BOOL isEditMode;
@property (nonatomic, assign) id delegate;
@property (nonatomic, strong) NSString*         userIdentifier;

+ (void)startWithApplicationKey:(NSString *)applicationKey;
+ (Pushmote *)pushmote;
- (void)beaconHere;
- (void)sendLogEvent:(NSString *)eventName :(NSDictionary *)eventParams;
+ (void)enterBackground;

@end
