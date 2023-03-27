// This file is generated and will be overwritten automatically.

#import <MapboxCommon/MBXUploadStatus.h>

@interface MBXUploadStatus ()
- (nonnull instancetype)initWithUploadId:(uint64_t)uploadId
                                   state:(MBXUploadState)state
                                   error:(nullable MBXUploadError *)error
                              totalBytes:(nullable NSNumber *)totalBytes
                               sentBytes:(uint64_t)sentBytes
                          totalSentBytes:(uint64_t)totalSentBytes
                              httpResult:(nullable MBXExpected<MBXHttpResponseData *, MBXHttpRequestError *> *)httpResult;
- (nonnull instancetype)initWithError:(nullable MBXUploadError *)error
                           totalBytes:(nullable NSNumber *)totalBytes
                           httpResult:(nullable MBXExpected<MBXHttpResponseData *, MBXHttpRequestError *> *)httpResult;

@property (nonatomic, readwrite, nullable) MBXExpected<MBXHttpResponseData *, MBXHttpRequestError *> *httpResult NS_REFINED_FOR_SWIFT;
@end
