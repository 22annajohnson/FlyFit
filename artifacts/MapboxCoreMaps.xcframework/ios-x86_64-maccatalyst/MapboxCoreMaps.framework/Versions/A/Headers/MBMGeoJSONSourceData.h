// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
@class MBXFeature;
@class MBXGeometry;

// NOLINTNEXTLINE(modernize-use-using)
typedef NS_ENUM(NSInteger, MBMGeoJSONSourceDataType)
{
    MBMGeoJSONSourceDataTypeGeometry,
    MBMGeoJSONSourceDataTypeFeature,
    MBMGeoJSONSourceDataTypeNSArray,
    MBMGeoJSONSourceDataTypeNSString
} NS_SWIFT_NAME(GeoJSONSourceDataType);

NS_SWIFT_NAME(GeoJSONSourceData)
__attribute__((visibility ("default")))
@interface MBMGeoJSONSourceData : NSObject

- (nonnull instancetype)initWithValue:(nonnull id)value __attribute__((deprecated("Please use: '+from{TypeName}:' instead.")));

+ (nonnull instancetype)fromGeometry:(nonnull MBXGeometry *)value;
+ (nonnull instancetype)fromFeature:(nonnull MBXFeature *)value;
+ (nonnull instancetype)fromNSArray:(nonnull NSArray<MBXFeature *> *)value;
+ (nonnull instancetype)fromNSString:(nonnull NSString *)value;

- (BOOL)isGeometry;
- (BOOL)isFeature;
- (BOOL)isNSArray;
- (BOOL)isNSString;

- (nonnull MBXGeometry *)getGeometry __attribute((ns_returns_retained));
- (nonnull MBXFeature *)getFeature __attribute((ns_returns_retained));
- (nonnull NSArray<MBXFeature *> *)getNSArray __attribute((ns_returns_retained));
- (nonnull NSString *)getNSString __attribute((ns_returns_retained));

@property (nonatomic, nonnull) id value;

@property (nonatomic, readonly) MBMGeoJSONSourceDataType type;

@end
