// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXUploadState.h>
@class MBXExpected<__covariant Value, __covariant Error>;

@class MBXHttpRequestError;
@class MBXHttpResponseData;
@class MBXUploadError;

/** Structure to hold current status information about an ongoing upload. */
NS_SWIFT_NAME(UploadStatus)
__attribute__((visibility ("default")))
@interface MBXUploadStatus : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;


/** ID for the upload. */
@property (nonatomic, readwrite) uint64_t uploadId;

/** State of the upload process. */
@property (nonatomic, readwrite) MBXUploadState state;

/** Optional. Contains error information in case of failure when state is set to UploadState::Failed. */
@property (nonatomic, readwrite, nullable) MBXUploadError *error;

/** The size of the upload (file + metadata). */
@property (nonatomic, readwrite, nullable) NSNumber *totalBytes NS_REFINED_FOR_SWIFT;

/** Amount of bytes uploaded since the last time the progress callback reported. */
@property (nonatomic, readwrite) uint64_t sentBytes;

/** Total amount of bytes uploaded for this request, subtract totalBytes (i.e. filesize and metadata) to get overhead of request. */
@property (nonatomic, readwrite) uint64_t totalSentBytes;


@end
