//
//  VidaSilentLivenessFace.h
//  VidaSilentLiveness
//
//  Created by Maheep on 05/02/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, VidaIDSilentLivenessOcclusionStatus) {
    /**
     * Block unknown
     */
    VidaIDSilentLiveness_UNKNOW = 0,

    /**
     * Unblocked
     */
    VidaIDSilentLiveness_NORMAL,

    /**
     * Block
     */
    VidaIDSilentLiveness_OCCLUSION,
};

@interface VidaSilentLivenessFace: NSObject
/**
 * Whether the face is blocked
 */
@property (assign, nonatomic) BOOL isFaceOcclusion;

/**
 * Alignment stage, occlusion of eyebrows
 */
@property (assign, nonatomic) VidaIDSilentLivenessOcclusionStatus browOcclusionStatus;

/**
 * The occlusion status of the eyes during the alignment phase
 */
@property (assign, nonatomic) VidaIDSilentLivenessOcclusionStatus eyeOcclusionStatus;

/**
 * Alignment stage, nose blocking status
 */
@property (assign, nonatomic) VidaIDSilentLivenessOcclusionStatus noseOcclusionStatus;

/**
 * Alignment stage, mouth blocking status
 */
@property (assign, nonatomic) VidaIDSilentLivenessOcclusionStatus mouthOcclusionStatus;

@end
