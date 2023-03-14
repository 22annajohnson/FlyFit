// This file is generated and will be overwritten automatically.

#import <MapboxCoreMaps/MBMTilesetDescriptorOptionsForTilesets.h>

@interface MBMTilesetDescriptorOptionsForTilesets ()
- (nonnull instancetype)initWithTilesets:(nonnull NSArray<NSString *> *)tilesets
                                 minZoom:(uint8_t)minZoom
                                 maxZoom:(uint8_t)maxZoom
                              pixelRatio:(float)pixelRatio
                            extraOptions:(nullable id)extraOptions;
- (nonnull instancetype)initWithTilesets:(nonnull NSArray<NSString *> *)tilesets
                                 minZoom:(uint8_t)minZoom
                                 maxZoom:(uint8_t)maxZoom
                            extraOptions:(nullable id)extraOptions;

@property (nonatomic, readonly, nullable, copy) id extraOptions;
@end
