// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Enum for different error cases which could happen during an upload. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXUploadErrorCode)
{
    /** General filesystem related error code. For cases like read error, no such file or directory etc. */
    MBXUploadErrorCodeFileSystemError,
    /**
     * General network related error.
     * Check the HttpRequestError in UploadStatus.httpResult for detailed information.
     */
    MBXUploadErrorCodeNetworkError
} NS_SWIFT_NAME(UploadErrorCode);

NSString* MBXUploadErrorCodeToString(MBXUploadErrorCode upload_error_code);
