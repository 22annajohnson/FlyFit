// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXUploadErrorCode.h>

/** Structure to hold information about errors in the upload. */
NS_SWIFT_NAME(UploadError)
__attribute__((visibility ("default")))
@interface MBXUploadError : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithCode:(MBXUploadErrorCode)code
                             message:(nonnull NSString *)message;

/** Upload error code. */
@property (nonatomic, readonly) MBXUploadErrorCode code;

/** Human readable string describing an error. */
@property (nonatomic, readonly, nonnull, copy) NSString *message;


@end
