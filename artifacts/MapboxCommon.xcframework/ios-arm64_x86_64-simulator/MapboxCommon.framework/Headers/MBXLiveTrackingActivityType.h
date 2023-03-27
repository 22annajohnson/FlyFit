// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** The type of user activity associated with the location updates. */
NS_SWIFT_NAME(LiveTrackingActivityType)
__attribute__((visibility ("default")))
@interface MBXLiveTrackingActivityType : NSObject

    /** Unknown activity. */
    @property (nonatomic, class, readonly) NSString * Unknown;
    /** Other types of vehicular navigation that are not automobile related. */
    @property (nonatomic, class, readonly) NSString * GenericNavigation;
    /** Vehicular navigation: track location changes to the automobile. */
    @property (nonatomic, class, readonly) NSString * AutomotiveNavigation;
    /** Fitness activities such as walking, running, cycling, and so on. */
    @property (nonatomic, class, readonly) NSString * Fitness;
    /** Airborne activities. */
    @property (nonatomic, class, readonly) NSString * Airborne;

@end
