//
//  VidaSilentLivenessDetectorDelegate.h
//  VidaSilentLiveness
//
//  Created by Maheep on 05/02/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VidaSilentLivenessFaceEnumType.h"
#import "VidaSilentLivenessImage.h"
#import "VidaSilentLivenessRect.h"
#import "VidaSilentLivenessFace.h"
#import "VidaLivenessEnumTypeHeader.h"

//@import EKYC;

/**
 * Live Detector Agent
 */
@protocol VidaSilentLivenessDetectorDelegate <NSObject>

@required

/**
 * Live detection success callback
 *
 * @param protobufData returns encrypted binary data
 * @param imageArr returns the VidaSilentImage array according to the specified output scheme. For the VidaSilentImage property, see VidaSilentImage.h
 * @param faceRectArr returns VidaSilentRect array according to the specified output scheme. For VidaSilentRect attributes, see VidaSilentRect.h
 */

- (void)silentLivenessDidSuccessfulGetProtobufData:(NSData *)protobufData
                                            images:(NSArray *)imageArr
                                         faceRects:(NSArray *)faceRectArr;


/**
 * Live detection failed callback
 *
 * @param livenessResult VidaIDSilentLivenessResult
 * @param faceError Live detection failed type
 * @param protobufData returns encrypted binary data
 * @param imageArr returns the VidaSilentImage array according to the specified output scheme. For the VidaSilentImage property, see VidaSilentImage.h
 * @param faceRectArr returns VidaSilentRect array according to the specified output scheme. For VidaSilentRect attributes, see VidaSilentRect.h
 */

- (void)silentLivenessDidFailWithLivenessResult:(VidaSilentLivenessResult)livenessResult
                                      faceError:(VidaIDSilentLivenessFaceError)faceError
                                   protobufData:(NSData *)protobufData
                                         images:(NSArray *)imageArr
                                      faceRects:(NSArray *)faceRectArr;

- (void)silentLivenessDidCancel;

@optional

- (void)silentLivenessDistanceStatus:(VidaIDSilentLivenessFaceDistanceStatus)distanceStatus
                         boundStatus:(VidaIDSilentLivenessFaceBoundStatus)boundStatus
                          silentFace:(VidaSilentLivenessFace *)silentFace;

- (void)silentLivenessFaceRect:(CGRect)rect;

- (void)silentLivenessVideoFrameRate:(NSInteger)rate;

@end
