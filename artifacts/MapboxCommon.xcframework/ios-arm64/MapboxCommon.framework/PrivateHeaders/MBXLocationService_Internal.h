// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXAccuracyAuthorization.h>
#import <MapboxCommon/MBXGetLocationCallback_Internal.h>
#import <MapboxCommon/MBXPermissionStatus.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXLocation;
@class MBXLocationError;
@protocol MBXLiveTrackingClient;
@protocol MBXLocationServiceObserver;

NS_SWIFT_NAME(LocationService)
@protocol MBXLocationService
/**
 * Check if the platform location service is available
 *
 * Returns true if the platform service is available and
 * false if it's not (for example when the device does not
 * have GNSS unit or has location service turned off).
 */
- (BOOL)isAvailable;
- (nonnull MBXExpected<MBXLocation *, MBXLocationError *> *)getLastLocation;
- (int32_t)getCurrentLocationForSettings:(nullable id)settings
                                callback:(nonnull MBXGetLocationCallback)callback;
/**
 * Cancels the request of getting current location.
 *
 * Please use this method to avoid unnecessary power consumption if it
 * happens that while waiting for current location you've realized that
 * you don't need it anymore.
 *
 * @param requestId An id of the request returned by
 *                  the getCurrentLocation() method.
 */
- (void)cancelGetCurrentLocationForRequestId:(int32_t)requestId;
/** Gets a current status of location permission of the app. */
- (MBXPermissionStatus)getPermissionStatus;
/** Gets a current accuracy authorization of the app */
- (MBXAccuracyAuthorization)getAccuracyAuthorization;
/**
 * Registers an observer. LocationService can have more than one observer.
 *
 * @param observer An observer to add.
 */
- (void)registerObserverForObserver:(nonnull id<MBXLocationServiceObserver>)observer;
/**
 * Removes observer. If the observer is not registered, this is no-op.
 *
 * @param observer An observer to remove.
 */
- (void)unregisterObserverForObserver:(nonnull id<MBXLocationServiceObserver>)observer;
/**
 * Gets list of available live tracking client implementation names.
 *
 * @return Returns a list of available LiveTracking client implementation names.
 */
- (nonnull NSArray<NSString *> *)getLiveTrackingClients;
/**
 * Gets capabilities of live tracking client implementation.
 *
 * @param name A LiveTrackingClient's name or nonspecified
 *             for the default implementation.
 * @return capabilities Capabilities of the chosen live tracking client
 *                      (see LiveTrackingClientCapabilities or
 *                       live_tracking_client_capabilities for c++).
 */
- (nullable id)getLiveTrackingClientCapabilitiesForName:(nullable NSString *)name;
/**
 * Gets settings supported by the live tracking client implementation.
 *
 * @return Returns settings supported by the implementation of the live tracking client.
 *         See LiveTrackingClientSettings.
 */
- (nullable id)getLiveTrackingClientSettingsForName:(nullable NSString *)name;
- (nonnull MBXExpected<id<MBXLiveTrackingClient>, MBXLocationError *> *)getLiveTrackingClientForName:(nullable NSString *)name
                                                                                        capabilities:(nullable id)capabilities;
@end
