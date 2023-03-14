// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(Version)
__attribute__((visibility ("default")))
@interface MBMVersion : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (uint32_t)getMajorVersion;
+ (uint32_t)getMinorVersion;
+ (uint32_t)getPatchVersion;
+ (nonnull NSString *)getVersionString __attribute((ns_returns_retained));
+ (nonnull NSString *)getRevisionString __attribute((ns_returns_retained));

@end
