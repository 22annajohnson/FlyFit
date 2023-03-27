// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXLiveTrackingState.h>
#import <MapboxCommon/MBXLocationClientStartStopCallback.h>

@protocol MBXLiveTrackingClientObserver;

NS_SWIFT_NAME(LiveTrackingClient)
@protocol MBXLiveTrackingClient
/**
 * Starts location tracking.
 *
 * @param settings Settings for this instance of the client.
 *                 When settings are not specified then reasonable default will be applied.
 *                 Unknown values in settings should be omitted by implementation silently.
 * @param callback Callback to get notified about the result of the call.
 *
 */
- (void)startForSettings:(nullable id)settings
                callback:(nonnull MBXLocationClientStartStopCallback)callback;
/**
 * Stops location tracking.
 *
 * @param callback Callback to get notified about the result of the call.
 */
- (void)stopForCallback:(nonnull MBXLocationClientStartStopCallback)callback;
- (void)registerObserverForObserver:(nonnull id<MBXLiveTrackingClientObserver>)observer;
- (void)unregisterObserverForObserver:(nonnull id<MBXLiveTrackingClientObserver>)observer;
/** Gets the name of this live tracking client implementation. */
- (nonnull NSString *)getName;
/** Gets current state of a client. */
- (MBXLiveTrackingState)getState;
/**
 * Gets settings in action.
 *
 * @return Returns employed setting or
 *         nothing if it's called before the start.
 *         See LiveTrackingClientSettings.
 */
- (nullable id)getActiveSettings;
/** Asks the client to flush batched locations to listeners. */
- (void)flush;
@end
