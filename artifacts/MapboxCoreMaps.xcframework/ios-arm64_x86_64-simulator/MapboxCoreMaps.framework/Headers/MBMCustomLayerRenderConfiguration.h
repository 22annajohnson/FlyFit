// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/**
 * Note! This is an experimental feature. It can be changed or removed in future versions.
 *
 * CustomLayerHost declares, by returning this from CustomLayerHost's prerender, what kind of rendering it intends to do in the very next frame.
 * If there is need for rendering to tile textures, declare if all tiles need to be re-rendered because e.g. underlying data changed.
 */
NS_SWIFT_NAME(CustomLayerRenderConfiguration)
__attribute__((visibility ("default")))
@interface MBMCustomLayerRenderConfiguration : NSObject

- (nonnull instancetype)init;

- (nonnull instancetype)initWithIsRenderToTileSupported:(BOOL)isRenderToTileSupported
                                    shouldRerenderTiles:(BOOL)shouldRerenderTiles;

/**
 * If this value is true and there's need for draping (globe or terrain are enabled), then renderToTile will be called to enable
 * the rendering of the custom layer into the texture of a tile.
 * If this value is set, and terrain or globe are active, only render to tile render call for this layer is called,
 * and "immediate mode" render is not called. A custom layer is, at one frame, either rendered to tile or rendered
 * directly.
 */
@property (nonatomic, readonly, getter=isIsRenderToTileSupported) BOOL isRenderToTileSupported;

/**
 * Set to true only for frame when content has changed - when set to true,
 * all the terrain render cache would get invalidated and redrawn, causing a drop in performance if invoked on every frame.
 */
@property (nonatomic, readonly, getter=isShouldRerenderTiles) BOOL shouldRerenderTiles;


@end
