// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(LiveTrackingClientMinimumDisplacementCategory)
__attribute__((visibility ("default")))
@interface MBXLiveTrackingClientMinimumDisplacementCategory : NSObject

    /**
     * No filter for minimum displacement.
     *
     * Any change in location should trigger a new location update.
     */
    @property (nonatomic, class, readonly) NSString * Any;
    /**
     * Significant displacements only.
     *
     * You can use this constant to indicate that a new update should be
     * triggered only after the device moves a significantly large distance.
     * How it's significant is determined by the particular
     * platform and, usually, implies it to be power efficient.
     */
    @property (nonatomic, class, readonly) NSString * Significant;

@end
