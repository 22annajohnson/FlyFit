// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXEventPriority_Internal.h>

@class MBXEvent;

NS_SWIFT_NAME(EventsBuilder)
__attribute__((visibility ("default")))
@interface MBXEventsBuilder : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

+ (nonnull MBXEvent *)buildErrorEventForPriority:(MBXEventPriority)priority
                                   sdkIdentifier:(nonnull NSString *)sdkIdentifier
                                      sdkVersion:(nonnull NSString *)sdkVersion
                                        isSilent:(BOOL)isSilent
                                       buildType:(nullable NSString *)buildType
                                   threadDetails:(nullable NSString *)threadDetails
                                    appStartDate:(nullable NSString *)appStartDate
                                      customData:(nullable NSDictionary<NSString *, NSString *> *)customData __attribute((ns_returns_retained));

@end
