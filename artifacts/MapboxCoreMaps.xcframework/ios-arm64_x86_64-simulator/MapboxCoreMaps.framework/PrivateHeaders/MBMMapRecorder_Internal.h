// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCoreMaps/MBMPlaybackFinished_Internal.h>

@class MBMMap;

NS_SWIFT_NAME(MapRecorder)
__attribute__((visibility ("default")))
@interface MBMMapRecorder : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Initializes the map recorder object.
 *
 * @param map The `map` to record.
 */
- (nonnull instancetype)initWithMap:(nonnull MBMMap *)map;

/** Begins the API call sequence recording. */
- (void)startRecording;
/**
 * Stops the current recording session.
 *
 * @return a JSON string which contains the recorded sequence.
 */
- (nonnull NSString *)stopRecording __attribute((ns_returns_retained));
- (void)replayForContent:(nonnull NSString *)content
           playbackCount:(int32_t)playbackCount
 playbackSpeedMultiplier:(double)playbackSpeedMultiplier
                callback:(nonnull MBMPlaybackFinished)callback;
/** Temporarily pauses or resumes playback if already paused. */
- (void)togglePauseReplay;
/** Returns the string description of the current state of playback. */
- (nonnull NSString *)getPlaybackState __attribute((ns_returns_retained));

@end
