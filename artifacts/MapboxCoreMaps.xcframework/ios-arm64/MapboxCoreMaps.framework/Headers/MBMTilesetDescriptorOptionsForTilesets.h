// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** Describes the style package load option values for a list of tilesets. */
NS_SWIFT_NAME(TilesetDescriptorOptionsForTilesets)
__attribute__((visibility ("default")))
@interface MBMTilesetDescriptorOptionsForTilesets : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;


/**
 * The tilesets associated with the tileset descriptor.
 *
 * Contains an array, each element of which must be either a URI to a TileJSON
 * resource or a JSON string representing the inline tileset.
 *
 * The provided URIs must have "mapbox://" scheme, e.g. "mapbox://mapbox.mapbox-streets-v8".
 */
@property (nonatomic, readonly, nonnull, copy) NSArray<NSString *> *tilesets;

/**
 * Minimum zoom level for the tile package.
 *
 * Note: the implementation loads and stores the loaded tiles
 * in batches, each batch has a pre-defined zoom range and it contains
 * all child tiles within the range. The zoom leveling scheme for the tile
 * batches can be defined in Tile JSON, otherwise the default scheme is used:
 * - Global coverage: 0 - 5
 * - Regional information: 6 - 10
 * - Local information: 11 - 14
 * - Streets detail: 15 - 16
 *
 * Internally, the implementation maps the given tile pack zoom range
 * and geometry to a set of pre-defined batches to load, therefore
 * it is highly recommended to choose the `minZoom` and `maxZoom` values
 * in accordance with the tile batches zoom ranges (see the list above).
 */
@property (nonatomic, readonly) uint8_t minZoom;

/**
 * Maximum zoom level for the tile package.
 *
 * maxZoom value cannot exceed the maximum allowed tile batch zoom value,
 * @see `minZoom`
 */
@property (nonatomic, readonly) uint8_t maxZoom;

/**
 * Pixel ratio to be accounted for when downloading raster tiles.
 *
 * The `pixelRatio` must be ≥ 0 and should typically be 1.0 or 2.0.
 */
@property (nonatomic, readonly) float pixelRatio;


@end
