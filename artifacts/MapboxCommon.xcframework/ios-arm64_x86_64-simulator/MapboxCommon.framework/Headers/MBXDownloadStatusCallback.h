// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBXDownloadStatus;

/**
 * Callback which is getting called to report changes in download session.
 * This callback can be invoked from any thread at the moment and the client is responsible for posting it back to a desired thread.
 */
NS_SWIFT_NAME(DownloadStatusCallback)
typedef void (^MBXDownloadStatusCallback)(MBXDownloadStatus * _Nonnull status); // NOLINT(modernize-use-using)
