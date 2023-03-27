// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Enum representing the current state of an upload. */
// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBXUploadState)
{
    /** Upload initiated but not started yet. */
    MBXUploadStatePending,
    /** Upload is in progress. */
    MBXUploadStateUploading,
    /** Upload failed. */
    MBXUploadStateFailed,
    /** Upload successfully finished. */
    MBXUploadStateFinished
} NS_SWIFT_NAME(UploadState);
