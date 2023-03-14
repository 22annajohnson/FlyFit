// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Set of commonly used HTTP header strings. */
NS_SWIFT_NAME(HttpHeaders)
__attribute__((visibility ("default")))
@interface MBXHttpHeaders : NSObject

    /** The Cache-Control HTTP header. */
    @property (nonatomic, class, readonly) NSString * CacheControl;
    /** The Content-Encoding representation header. */
    @property (nonatomic, class, readonly) NSString * ContentEncoding;
    /** The Content-Length header. */
    @property (nonatomic, class, readonly) NSString * ContentLength;
    /** The Content-Type representation header. */
    @property (nonatomic, class, readonly) NSString * ContentType;
    /** The Digest response HTTP header. */
    @property (nonatomic, class, readonly) NSString * Digest;
    /** The ETag (or entity tag) HTTP response header. */
    @property (nonatomic, class, readonly) NSString * ETag;
    /** The If-None-Match HTTP request header. */
    @property (nonatomic, class, readonly) NSString * IfNoneMatch;
    /** The Last-Modified response HTTP header. */
    @property (nonatomic, class, readonly) NSString * LastModified;
    /** The User-Agent request header. */
    @property (nonatomic, class, readonly) NSString * UserAgent;
    /** Custom Accept-Encoding request HTTP header. */
    @property (nonatomic, class, readonly) NSString * XAcceptEncoding;
    /** Custom Content-Encoding representation header. */
    @property (nonatomic, class, readonly) NSString * XContentEncoding;
    /** X-Accept-Delta request header. */
    @property (nonatomic, class, readonly) NSString * XAcceptDelta;
    /** X-Canonical-ETag response header. */
    @property (nonatomic, class, readonly) NSString * XCanonicalETag;
    /** X-Delta-Base response header. */
    @property (nonatomic, class, readonly) NSString * XDeltaBase;
    /** X-Rate-Limit-Reset response header. */
    @property (nonatomic, class, readonly) NSString * XRateLimitReset;
    /** Custom token restriction header. */
    @property (nonatomic, class, readonly) NSString * XAppInfo;

@end
