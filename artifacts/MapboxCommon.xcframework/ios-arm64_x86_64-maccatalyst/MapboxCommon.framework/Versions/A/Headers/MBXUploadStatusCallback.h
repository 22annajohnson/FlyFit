// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXUploadStatus;

/**
 * Callback which is used to report the result of the file upload.
 * This callback can be invoked from any thread at the moment and the client is responsible for posting it back to a desired thread.
 */
NS_SWIFT_NAME(UploadStatusCallback)
typedef void (^MBXUploadStatusCallback)(MBXUploadStatus * _Nonnull status); // NOLINT(modernize-use-using)
