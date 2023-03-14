// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@protocol MBXUploadServiceInterface;

/**
 * Upload service factory.
 *
 * This class is used to get a pointer/reference to the Upload service platform implementation.
 * In order to set a custom implementation, the client must call `setUserDefined()` method once before any actual Upload service is required.
 */
NS_SWIFT_NAME(UploadServiceFactory)
__attribute__((visibility ("default")))
@interface MBXUploadServiceFactory : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Replaces the implementation of the Upload service with a custom one.
 * If you define your own HTTP Service we strongly suggest implementing this interface too.
 *
 * If a default implementation has been created or a user defined implementation has been set already,
 * it will be replaced. The factory maintains a strong reference to the provided implementation
 * which can be released with the reset() method.
 */
+ (void)setUserDefinedForCustom:(nonnull id<MBXUploadServiceInterface>)custom;

@end
