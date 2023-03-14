// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXLiveTrackingState.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXLocation;
@class MBXLocationError;

NS_SWIFT_NAME(LiveTrackingClientObserver)
@protocol MBXLiveTrackingClientObserver
/**
 * Called when a client has been started or stopped.
 *
 * @param state A new state of the client.
 * @param error An error if a client was stopped because of a failure.
 */
- (void)onLiveTrackingStateChangedForState:(MBXLiveTrackingState)state
                                     error:(nullable MBXLocationError *)error;
- (void)onLocationUpdateReceivedForLocationUpdate:(nonnull MBXExpected<NSArray<MBXLocation *> *, MBXLocationError *> *)locationUpdate;
@end
