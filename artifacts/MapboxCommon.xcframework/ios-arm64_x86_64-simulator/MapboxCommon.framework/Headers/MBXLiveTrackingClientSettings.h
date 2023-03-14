// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Parameters that are used to tune live tracking sessions. */
NS_SWIFT_NAME(LiveTrackingClientSettings)
__attribute__((visibility ("default")))
@interface MBXLiveTrackingClientSettings : NSObject

    /**
     * Desired accuracy of location fixes in the form of categories.
     *
     * Values: String (see LiveTrackingClientAccuracyCategory constants)
     */
    @property (nonatomic, class, readonly) NSString * AccuracyCategory;
    /**
     * Desired accuracy of location fixes specified in meters.
     *
     * Value: Number (meters)
     */
    @property (nonatomic, class, readonly) NSString * Accuracy;
    /**
     * Minimum displacement between location updates in the form of categories.
     *
     * Value: String (LiveTrackingClientMinimumDisplacementCategory constants)
     */
    @property (nonatomic, class, readonly) NSString * MinimumDisplacementCategory;
    /**
     * Minimum displacement between location updates in meters.
     *
     * Value: Number (meters)
     */
    @property (nonatomic, class, readonly) NSString * MinimumDisplacement;
    /**
     * Desired interval for active location updates.
     *
     * Value: Number (milliseconds)
     */
    @property (nonatomic, class, readonly) NSString * Interval;
    /**
     * The fastest rate at which the application will receive location updates,
     * which migth be faster than the `Interval`. Unlike `Interval` this parameter
     * is exact.
     *
     * Value: Number (milliseconds)
     */
    @property (nonatomic, class, readonly) NSString * MinimumInterval;
    /**
     * Maximum wait time for location updates. If it's at least 2x larger then `Interval`,
     * then location delivery may be delayed and multiple locations can be delivered at
     * once.
     *
     * Value: Number (milliseconds)
     */
    @property (nonatomic, class, readonly) NSString * MaximumInterval;
    /**
     * Sets whether the client wants the locations services to wait a few seconds for
     * accurate locations initially, when accurate locations could not be computed on
     * the device immediately after high accuracy request is made. By default the
     * location services will wait for accurate locations.
     *
     * Note: applies only to high accuracy requests; applies to the initial
     *       locations computed right after the location update is requested,
     *       the following inaccurate locations may still be delivered
     *       to the client without delay.
     *
     * Value: Boolean
     */
    @property (nonatomic, class, readonly) NSString * WaitForAccurateLocation;
    /**
     * Activity type associated with this live tracking session.
     *
     * Value: String (LiveTrackingActivityType constants)
     */
    @property (nonatomic, class, readonly) NSString * ActivityType;

@end
