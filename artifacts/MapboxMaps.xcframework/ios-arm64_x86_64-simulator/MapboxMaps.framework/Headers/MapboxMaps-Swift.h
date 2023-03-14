#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef MAPBOXMAPS_SWIFT_H
#define MAPBOXMAPS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import CoreLocation;
@import Foundation;
@import MapboxCoreMaps;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MapboxMaps",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC10MapboxMaps21AppleLocationProvider")
@interface AppleLocationProvider : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CLLocationManager;
@class CLLocation;
@class CLHeading;
@class NSNumber;

@interface AppleLocationProvider (SWIFT_EXTENSION(MapboxMaps)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)heading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
- (void)locationManagerDidChangeAuthorization:(CLLocationManager * _Nonnull)manager SWIFT_AVAILABILITY(ios,introduced=14.0);
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager * _Nonnull)manager SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC10MapboxMaps19BasicCameraAnimator")
@interface BasicCameraAnimator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end
















/// An animator that evokes powered flight and an optional transition duration and timing function.
/// It seamlessly incorporates zooming and panning to help the user find their bearings even after
/// traversing a great distance.
/// seealso:
/// <code>CameraAnimationsManager/fly(to:duration:completion:)</code>
SWIFT_CLASS("_TtC10MapboxMaps19FlyToCameraAnimator")
@interface FlyToCameraAnimator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface MBMGlyphsRasterizationOptions (SWIFT_EXTENSION(MapboxMaps))
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end



/// Instances of this class are delivered to <code>LocationConsumer</code>s by <code>LocationManager</code> whenever
/// the heading, location, or accuracy authorization change.
SWIFT_CLASS("_TtC10MapboxMaps8Location")
@interface Location : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The <code>LocationConsumer</code> protocol defines a method that a class must implement to consume location updates from LocationManager
SWIFT_PROTOCOL("_TtP10MapboxMaps16LocationConsumer_")
@protocol LocationConsumer
/// New location update received
- (void)locationUpdateWithNewLocation:(Location * _Nonnull)newLocation;
@end


/// An object responsible for notifying the map view about location-related events,
/// such as a change in the device’s location.
SWIFT_CLASS("_TtC10MapboxMaps15LocationManager")
@interface LocationManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




/// The <code>LocationPermissionsDelegate</code> protocol defines a set of optional methods that you
/// can use to receive events from an associated location manager object.
SWIFT_PROTOCOL("_TtP10MapboxMaps27LocationPermissionsDelegate_")
@protocol LocationPermissionsDelegate
@optional
/// Tells the delegate that an attempt to locate the user’s position failed.
/// \param locationManager The location manager that is tracking the user’s location.
///
/// \param error An error object containing the reason why location tracking failed.
///
- (void)locationManager:(LocationManager * _Nonnull)locationManager didFailToLocateUserWithError:(NSError * _Nonnull)error;
/// Tells the delegate that the accuracy authorization has changed.
/// \param locationManager The location manager that is tracking the user’s location.
///
/// \param accuracyAuthorization The updated accuracy authorization value.
///
- (void)locationManager:(LocationManager * _Nonnull)locationManager didChangeAccuracyAuthorization:(CLAccuracyAuthorization)accuracyAuthorization;
/// Asks the delegate whether the heading calibration alert should be displayed.
/// \param locationManager The location manager object coordinating the display of the heading calibration alert.
///
///
/// returns:
/// <code>true</code> if you want to allow the heading calibration alert to be displayed; <code>false</code> if you do not.
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(LocationManager * _Nonnull)locationManager SWIFT_WARN_UNUSED_RESULT;
@end




/// Options used when initializing <code>MapView</code>.
/// Contains the <code>ResourceOptions</code>, <code>MapOptions</code> (including <code>GlyphsRasterizationOptions</code>)
/// that are required to initialize a <code>MapView</code>.
SWIFT_CLASS("_TtC10MapboxMaps14MapInitOptions")
@interface MapInitOptions : NSObject
/// :nodoc:
/// See https://developer.apple.com/forums/thread/650054 for context
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end


/// A protocol used to provide <code>MapInitOptions</code> when initializing a <code>MapView</code> with a Storyboard or
/// a nib.
SWIFT_PROTOCOL("_TtP10MapboxMaps22MapInitOptionsProvider_")
@protocol MapInitOptionsProvider
/// A method to be called when <code>MapView</code> needs initialization options
///
/// returns:
/// Initializations options for the <code>MapView</code>.
- (MapInitOptions * _Nonnull)mapInitOptions SWIFT_WARN_UNUSED_RESULT;
@end


@interface MBMMapOptions (SWIFT_EXTENSION(MapboxMaps))
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end



@class NSCoder;

SWIFT_CLASS("_TtC10MapboxMaps7MapView")
@interface MapView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios_app_extension,unavailable);
/// :nodoc:
/// See https://developer.apple.com/forums/thread/650054 for context
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)didMoveToWindow;
@end















/// APIs for managing map ornaments
SWIFT_CLASS("_TtC10MapboxMaps16OrnamentsManager")
@interface OrnamentsManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The <code>PuckLocationConsumer</code> protocol defines a method that a conformer must implement to consume a puck’s accurate location.
SWIFT_PROTOCOL("_TtP10MapboxMaps20PuckLocationConsumer_")
@protocol PuckLocationConsumer
/// To be invoked when a new puck’s location is received.
- (void)puckLocationUpdateWithNewLocation:(Location * _Nonnull)newLocation;
@end

























#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef MAPBOXMAPS_SWIFT_H
#define MAPBOXMAPS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import CoreLocation;
@import Foundation;
@import MapboxCoreMaps;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MapboxMaps",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC10MapboxMaps21AppleLocationProvider")
@interface AppleLocationProvider : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CLLocationManager;
@class CLLocation;
@class CLHeading;
@class NSNumber;

@interface AppleLocationProvider (SWIFT_EXTENSION(MapboxMaps)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)heading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
- (void)locationManagerDidChangeAuthorization:(CLLocationManager * _Nonnull)manager SWIFT_AVAILABILITY(ios,introduced=14.0);
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager * _Nonnull)manager SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC10MapboxMaps19BasicCameraAnimator")
@interface BasicCameraAnimator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end
















/// An animator that evokes powered flight and an optional transition duration and timing function.
/// It seamlessly incorporates zooming and panning to help the user find their bearings even after
/// traversing a great distance.
/// seealso:
/// <code>CameraAnimationsManager/fly(to:duration:completion:)</code>
SWIFT_CLASS("_TtC10MapboxMaps19FlyToCameraAnimator")
@interface FlyToCameraAnimator : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface MBMGlyphsRasterizationOptions (SWIFT_EXTENSION(MapboxMaps))
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end



/// Instances of this class are delivered to <code>LocationConsumer</code>s by <code>LocationManager</code> whenever
/// the heading, location, or accuracy authorization change.
SWIFT_CLASS("_TtC10MapboxMaps8Location")
@interface Location : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The <code>LocationConsumer</code> protocol defines a method that a class must implement to consume location updates from LocationManager
SWIFT_PROTOCOL("_TtP10MapboxMaps16LocationConsumer_")
@protocol LocationConsumer
/// New location update received
- (void)locationUpdateWithNewLocation:(Location * _Nonnull)newLocation;
@end


/// An object responsible for notifying the map view about location-related events,
/// such as a change in the device’s location.
SWIFT_CLASS("_TtC10MapboxMaps15LocationManager")
@interface LocationManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




/// The <code>LocationPermissionsDelegate</code> protocol defines a set of optional methods that you
/// can use to receive events from an associated location manager object.
SWIFT_PROTOCOL("_TtP10MapboxMaps27LocationPermissionsDelegate_")
@protocol LocationPermissionsDelegate
@optional
/// Tells the delegate that an attempt to locate the user’s position failed.
/// \param locationManager The location manager that is tracking the user’s location.
///
/// \param error An error object containing the reason why location tracking failed.
///
- (void)locationManager:(LocationManager * _Nonnull)locationManager didFailToLocateUserWithError:(NSError * _Nonnull)error;
/// Tells the delegate that the accuracy authorization has changed.
/// \param locationManager The location manager that is tracking the user’s location.
///
/// \param accuracyAuthorization The updated accuracy authorization value.
///
- (void)locationManager:(LocationManager * _Nonnull)locationManager didChangeAccuracyAuthorization:(CLAccuracyAuthorization)accuracyAuthorization;
/// Asks the delegate whether the heading calibration alert should be displayed.
/// \param locationManager The location manager object coordinating the display of the heading calibration alert.
///
///
/// returns:
/// <code>true</code> if you want to allow the heading calibration alert to be displayed; <code>false</code> if you do not.
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(LocationManager * _Nonnull)locationManager SWIFT_WARN_UNUSED_RESULT;
@end




/// Options used when initializing <code>MapView</code>.
/// Contains the <code>ResourceOptions</code>, <code>MapOptions</code> (including <code>GlyphsRasterizationOptions</code>)
/// that are required to initialize a <code>MapView</code>.
SWIFT_CLASS("_TtC10MapboxMaps14MapInitOptions")
@interface MapInitOptions : NSObject
/// :nodoc:
/// See https://developer.apple.com/forums/thread/650054 for context
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end


/// A protocol used to provide <code>MapInitOptions</code> when initializing a <code>MapView</code> with a Storyboard or
/// a nib.
SWIFT_PROTOCOL("_TtP10MapboxMaps22MapInitOptionsProvider_")
@protocol MapInitOptionsProvider
/// A method to be called when <code>MapView</code> needs initialization options
///
/// returns:
/// Initializations options for the <code>MapView</code>.
- (MapInitOptions * _Nonnull)mapInitOptions SWIFT_WARN_UNUSED_RESULT;
@end


@interface MBMMapOptions (SWIFT_EXTENSION(MapboxMaps))
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end



@class NSCoder;

SWIFT_CLASS("_TtC10MapboxMaps7MapView")
@interface MapView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios_app_extension,unavailable);
/// :nodoc:
/// See https://developer.apple.com/forums/thread/650054 for context
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)didMoveToWindow;
@end















/// APIs for managing map ornaments
SWIFT_CLASS("_TtC10MapboxMaps16OrnamentsManager")
@interface OrnamentsManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The <code>PuckLocationConsumer</code> protocol defines a method that a conformer must implement to consume a puck’s accurate location.
SWIFT_PROTOCOL("_TtP10MapboxMaps20PuckLocationConsumer_")
@protocol PuckLocationConsumer
/// To be invoked when a new puck’s location is received.
- (void)puckLocationUpdateWithNewLocation:(Location * _Nonnull)newLocation;
@end

























#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
