// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(LiveTrackingClientLifecycleMode)
__attribute__((visibility ("default")))
@interface MBXLiveTrackingClientLifecycleMode : NSObject

    /**
     * Live tracking client lifecycle mode is unspecified or
     * foreground/background granularity is not supported by
     * a system.
     */
    @property (nonatomic, class, readonly) NSString * None;
    /** Live tracking client receives location updates only while an app is in use. */
    @property (nonatomic, class, readonly) NSString * Foreground;
    /**
     * Live tracking client receives location updates always,
     * even an app isn't running (the system should wake up the
     * app to deliver updates)
     */
    @property (nonatomic, class, readonly) NSString * Background;

@end
