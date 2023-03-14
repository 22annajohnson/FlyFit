// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXLocationService;

/**
 * Location service factory.
 *
 * This class is used to instantiate a platform-specific implementation
 * of location service. In order to set a custom implementation,
 * the user must call `setUserDefined()` method before any actual
 * location service is requested.
 *
 */
NS_SWIFT_NAME(LocationServiceFactory)
__attribute__((visibility ("default")))
@interface MBXLocationServiceFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Releases the implementation of the Location service.
 *
 * The strong reference from the factory to a custom Location service implementation will be released. This can be
 * used to release the Location service implementation once it is no longer needed. It may otherwise be kept until
 * the end of the program.
 */
+ (void)reset;

@end
