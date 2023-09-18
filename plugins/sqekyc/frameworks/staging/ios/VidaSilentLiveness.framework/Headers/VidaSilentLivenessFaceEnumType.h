//
//  VidaSilentLivenessFaceEnumType.h
//  EKYC
//
//  Created by Maheep on 05/02/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

/**
 * Live detection failure type
 */
typedef NS_ENUM (NSInteger, VidaIDSilentLivenessFaceError) {
    /** Face status is unknown */
    VidaSilentLiveness_E_FACE_UNKNOWN,
    /** No face */
    VidaSilentLiveness_E_NOFACE_DETECTED,
    /** Face occlusion */
    VidaSilentLiveness_E_FACE_OCCLUSION,
    /** Vital detection failed */
    VidaSilentLiveness_E_HACK
};
/**
 * Face distance in live detection
 */
typedef NS_ENUM (NSInteger, VidaIDSilentLivenessFaceDistanceStatus) {
    /** Face is too far from the phone */
    VidaSilentLiveness_FACE_TOO_FAR,
    /** Face is too close to the phone */
    VidaSilentLiveness_FACE_TOO_CLOSE,
    /** Normal face distance */
    VidaSilentLiveness_DISTANCE_FACE_NORMAL,
    /** Face distance is unknown */
    VidaSilentLiveness_DISTANCE_UNKNOWN
};

/**
 * Face position in live detection
 */
typedef NS_ENUM (NSUInteger, VidaIDSilentLivenessFaceBoundStatus) {
    /** No face */
    VidaSilentLiveness_BOUND_NO_FACE,
    /** The face is inside the frame */
    VidaSilentLiveness_FACE_IN_BOUNDE,
    /** Face out of frame */
    VidaSilentLiveness_BOUND_FACE_OUT_BOUND
};

/**
 * Face orientation
 */
typedef NS_ENUM (NSUInteger, VidaIDSilentLivenessFaceOrientaion) {
    /** Face up, that is, face normal */
    VidaSilentLiveness_FACE_UP = 0,
    /** The face is turned to the left, that is, the face has been rotated 90 degrees counterclockwise */
    VidaSilentLiveness_FACE_LEFT = 1,
    /** Face down, that is, face rotated 180 degrees counterclockwise */
    VidaSilentLiveness_FACE_DOWN = 2,
    /** Face is turned to the right, that is, face is rotated 270 degrees counterclockwise */
    VidaSilentLiveness_FACE_RIGHT = 3
};

typedef NS_ENUM(NSUInteger, VIDASilentLivenessDeviceError) {
    /** Failed to obtain camera permission */
    VIDASilentLiveness_E_CAMERA = 0,
    /** The application is about to be suspended */
    VIDASilentLiveness_WILL_RESIGN_ACTIVE,
};
