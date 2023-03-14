// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCommon/MBXResultCallback.h>
#import <MapboxCommon/MBXUploadStatusCallback.h>

@class MBXUploadOptions;

/**
 * Interface to the Upload service.
 * This interface provides basic functionality that allows uploading to the Mapbox backend.
 */
NS_SWIFT_NAME(UploadServiceInterface)
@protocol MBXUploadServiceInterface
/**
 * Sends an upload request to the native or custom Upload Service.
 *
 * @param options The configuration of the request, including URL and file path.
 * @param callback Callback to be called in response to the request for updates.
 *
 * @return ID handle to cancel the upload.
 */
- (uint64_t)uploadForOptions:(nonnull MBXUploadOptions *)options
                    callback:(nonnull MBXUploadStatusCallback)callback;
/**
 * Cancels a pending or running upload.
 * In case of success, the result of the HttpResponse in the request's callback will hold the error RequestCancelled
 *
 * @param id Handle given by upload() method.
 * @param callback Callback to be called after attempt to cancel requests. Use this for error handling related to the id. It does not report if the request gets actually cancelled.
 */
- (void)cancelUploadForId:(uint64_t)id
                 callback:(nonnull MBXResultCallback)callback;
@end
