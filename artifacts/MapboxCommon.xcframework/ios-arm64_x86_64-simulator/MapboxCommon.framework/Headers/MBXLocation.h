// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Location information. */
NS_SWIFT_NAME(Location)
__attribute__((visibility ("default")))
@interface MBXLocation : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithLatitude:(double)latitude
                               longitude:(double)longitude
                               timestamp:(uint64_t)timestamp
                      monotonicTimestamp:(nullable NSNumber *)monotonicTimestamp
                                altitude:(nullable NSNumber *)altitude
                      horizontalAccuracy:(nullable NSNumber *)horizontalAccuracy
                        verticalAccuracy:(nullable NSNumber *)verticalAccuracy
                                   speed:(nullable NSNumber *)speed
                           speedAccuracy:(nullable NSNumber *)speedAccuracy
                                 bearing:(nullable NSNumber *)bearing
                         bearingAccuracy:(nullable NSNumber *)bearingAccuracy
                                   floor:(nullable NSNumber *)floor
                                  source:(nullable NSString *)source
                                   extra:(nullable id)extra;

/** The north–south position of a point on the Earth's surface, in decimal degrees (WGS84). */
@property (nonatomic, readonly) double latitude;

/** The east–west position of a point on the Earth's surface, in decimal degrees (WGS84). */
@property (nonatomic, readonly) double longitude;

/** The UTC time of this location fix, in milliseconds since epoch (January 1, 1970). */
@property (nonatomic, readonly) uint64_t timestamp;

/** The monotonic timestamp, in nanoseconds. */
@property (nonatomic, readwrite, nullable) NSNumber *monotonicTimestamp;

/** The altitude of the location in meters above the WGS84 reference ellipsoid. */
@property (nonatomic, readwrite, nullable) NSNumber *altitude;

/** The estimated horizontal accuracy of this location, radial, in meters. */
@property (nonatomic, readwrite, nullable) NSNumber *horizontalAccuracy;

/** The estimated vertical accuracy of this location, in meters. */
@property (nonatomic, readwrite, nullable) NSNumber *verticalAccuracy;

/** The instantaneous speed of the device, measured in meters/second over ground. */
@property (nonatomic, readwrite, nullable) NSNumber *speed;

/** The estimated speed accuracy of this location, in meters/second. */
@property (nonatomic, readwrite, nullable) NSNumber *speedAccuracy;

/** The GNSS bearing, in degrees. */
@property (nonatomic, readwrite, nullable) NSNumber *bearing;

/** The estimated bearing accuracy of this location, in degrees. */
@property (nonatomic, readwrite, nullable) NSNumber *bearingAccuracy;

/**
 * The logical floor of the building.
 *
 * Note that 0 zero indicates the ground floor, negative values
 * indicate underground floors and positive values indicate floors
 * above ground level.
 */
@property (nonatomic, readwrite, nullable) NSNumber *floor;

/** The source that provides this location */
@property (nonatomic, readwrite, nullable, copy) NSString *source;

/** Additional information */
@property (nonatomic, readonly, nullable, copy) id extra;


@end
