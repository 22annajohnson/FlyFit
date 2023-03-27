// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** The state of real-time location tracking. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXLiveTrackingState)
{
    /** Tracking is stopped or not started yet. */
    MBXLiveTrackingStateStopped,
    /** Request to start tracking is in progress. */
    MBXLiveTrackingStateStarting,
    /** Tracking is started. */
    MBXLiveTrackingStateStarted,
    /** Request to stop tracking is in progress. */
    MBXLiveTrackingStateStopping
} NS_SWIFT_NAME(LiveTrackingState);

NSString* MBXLiveTrackingStateToString(MBXLiveTrackingState live_tracking_state);
