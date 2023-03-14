// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** This constants contains list of LiveTracking client implementation names. */
NS_SWIFT_NAME(LiveTrackingClients)
__attribute__((visibility ("default")))
@interface MBXLiveTrackingClients : NSObject

    /**
     * Implementation based on raw Andoid Location API.
     * Available only on Android devices.
     */
    @property (nonatomic, class, readonly) NSString * Android;
    /**
     * Implementation based of Google's Play Services Location API.
     * Available on Android Google's certified devices along
     * with `Android` implementation.
     */
    @property (nonatomic, class, readonly) NSString * PlayServicesLocation;
    /**
     * Implementation based Apple's Core Location API.
     * Available only on Apple devices.
     */
    @property (nonatomic, class, readonly) NSString * AppleCoreLocation;
    /** Implementation which is using GPSd as location updates source. */
    @property (nonatomic, class, readonly) NSString * Gpsd;
    /**
     * Implementation which is using D-Bus service `GeoClue`
     * as location information source. De-facto standard for
     * GNU/Linux-based desktop and mobile.
     */
    @property (nonatomic, class, readonly) NSString * GeoClue;

@end
