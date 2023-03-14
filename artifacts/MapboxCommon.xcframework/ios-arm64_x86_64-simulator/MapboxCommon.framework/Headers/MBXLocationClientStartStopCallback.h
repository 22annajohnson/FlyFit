// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXLocationError;

/**
 * Callback involved to return result of LiveTrackingClient `start` and `stop` methods.
 *
 * @param error An error describing a failure if it happens.
 */
NS_SWIFT_NAME(LocationClientStartStopCallback)
typedef void (^MBXLocationClientStartStopCallback)(MBXLocationError * _Nullable error); // NOLINT(modernize-use-using)
