// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(LiveTrackingClientAccuracyCategory)
__attribute__((visibility ("default")))
@interface MBXLiveTrackingClientAccuracyCategory : NSObject

    /**
     * The highest possible accuracy requirement that uses additional
     * sensors (if possible) to facilitate navigation use case.
     */
    @property (nonatomic, class, readonly) NSString * ExtraHigh;
    /** High accuracy requirement. */
    @property (nonatomic, class, readonly) NSString * High;
    /** Medium accuracy requirement (typically between 100 and 500 meters). */
    @property (nonatomic, class, readonly) NSString * Medium;
    /** Low accuracy requirement (typically greater than 500 meters). */
    @property (nonatomic, class, readonly) NSString * Low;
    /**
     * Passive only accuracy request, not triggers any active locations or power usage itself,
     * but may receive locations generated in response to other requests.
     */
    @property (nonatomic, class, readonly) NSString * Passive;

@end
