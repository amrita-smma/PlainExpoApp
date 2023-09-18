    //
    //  VidaSilentLiveness.h
    //  VidaSilentLiveness
    //
    //  Created by Maheep on 05/02/20.
    //  Copyright © 2020 VIDA. All rights reserved.
    //

#import <Foundation/Foundation.h>
#import "VidaSilentLivenessDetectorDelegate.h"
#import "VidaSilentLivenessFaceEnumType.h"
#import <AVFoundation/AVFoundation.h>
#import "VidaSilentLivenessRect.h"
#import "VidaSilentLivenessImage.h"
#import "VidaSilentLivenessView.h"
#import "VidaSilentLivenessFaceEnumType.h"
#import "VidaSilentLivenessFace.h"

    //! Project version number for VidaSilentLiveness.
FOUNDATION_EXPORT double VidaSilentLivenessVersionNumber;

    //! Project version string for VidaSilentLiveness.
FOUNDATION_EXPORT const unsigned char VidaSilentLivenessVersionString[];

extern NSInteger const kSilentLivenessDefaultTimeOutDuration;


@interface VidaSilentLivenessMain : NSObject

/**
 *  Set whether to perform eyebrow occlusion detection in live detection, default is NO when not set;
 */
@property (assign, nonatomic) BOOL isBrowOcclusion;

@property (nonatomic, weak) id<VidaSilentLivenessDetectorDelegate> detectorDelegate;

/**
 * Initialization method
 * @param delegate callback proxy
 * @return silent live detector example
 */

- (instancetype)initWithDetectionModelPath:(id<VidaSilentLivenessDetectorDelegate>)delegate
                                          : (NSString *) apiKey
                                          : (NSString*)licenseKey
                                          : (NSString*)licenseFilePath
                                          : (VidaSilentLivenessResult *)result
                                          : (NSString *)modelBundlePath;

/**
 * Set the timeout for silent live detection. If the set value is invalid, an error is reported: VidaSilentLiveness_E_INVALID_ARGUMENT.
 *
 * @param duration The maximum detection time allowed for each module. When it is equal to 0, no timeout is set. The default is 10s. The unit is second.
 */

-(void) setTimeOutDuration: (NSInteger) duration;

/**
 * The silent living body is set through conditions. If the value set is invalid, an error is reported: VidaSilentLiveness_E_INVALID_ARGUMENT.
 *
 * @param time The minimum time required to pass a silent living body, [0 ~ dDuration), default 3s, it is recommended to be at least 1ms, 0 means no minimum time limit
 *
 * @param frame The minimum number of frames required to pass a silent living body, the default is 4 frames, 0 means no minimum frame number limit
 */

- (void)setLivenessPasslimitTime:(NSInteger)time passFrames:(NSInteger)frame;

- (void)setLivenessPasslimitTime:(NSInteger)time passFrames:(NSInteger)frame hackThreshold: (float)threshold;


/**
 Set the judgment condition of the face distance. When the parameter value is not within the value range or dCloseDistance is not 0 and dFarDistance is greater than dCloseDistance, an error is reported: VidaSilentLiveness_E_INVALID_ARGUMENT.
 
 @param farDistance
 The ratio of the height / width of the face to the short side of the image, [0.0 ~ 1.0]. The closer the parameter setting is to 0, the farther the face is from the screen. The default is 0.4. If it is set to 0, there is no prompt too far.
 @param closeDistance
 The ratio of the face height / width to the short side of the image, [0.0 ~ 1.0]. The closer the parameter setting is to 1, the closer the face is to the screen, the default is 0.8. If it is set to 0, there is no prompt too close.
 
 */

- (void)setLivenessFaceTooFar:(CGFloat)farDistance tooClose:(CGFloat)closeDistance;

/**
 Face tracking and live detection of continuous input frames
 
 @param sampleBuffer image data for each frame
 @param faceOrientation Face orientation
 @param prepareframe align the frame of the frame
 @param previewframe frame of video preview box
 @param connection AVCaptureConnection object
 @param captureVideoPreviewLayer AVCaptureVideoPreviewLayer object
 */

- (void)trackAndDetectWithCMSampleBuffer:(CMSampleBufferRef)sampleBuffer
                          faceOrientaion:(VidaIDSilentLivenessFaceOrientaion)faceOrientation
                            prepareframe:(CGRect)prepareframe
                            previewframe:(CGRect)previewframe
                              connection:(AVCaptureConnection *)connection
                captureVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)captureVideoPreviewLayer;

/**
 * Start testing
 */

-(void) startDetection;

/**
 * Restart testing
 */
-(void) reStartDetection;

/**
 * Cancel detection
 */

-(void) cancelDetection;

/**
 * Get SDK version
 *
 * @return SDK version
 */

+ (NSString *) getVersion;

/**
 * Get the underlying library version.
 *
 * @return underlying library version.
 */
+ (NSString *) getLibraryVersion;

@end
