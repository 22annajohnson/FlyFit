// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

@class MBMViewAnnotationPositionDescriptor;

NS_SWIFT_NAME(ViewAnnotationPositionsUpdateListener)
@protocol MBMViewAnnotationPositionsUpdateListener
/**
 * Called from the 'Renderer' thread with the updated positions.
 *
 * Note: For platforms that have a dedicated 'Renderer' thread that is different from the 'Main' thread, this function
 * will also be scheduled from the 'Renderer' thread but will be called on the 'Main' thread with empty positions.
 */
- (void)onViewAnnotationPositionsUpdateForPositions:(nonnull NSArray<MBMViewAnnotationPositionDescriptor *> *)positions;
@end
