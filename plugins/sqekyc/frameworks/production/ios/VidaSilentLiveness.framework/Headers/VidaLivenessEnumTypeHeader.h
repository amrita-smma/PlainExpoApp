//
//  VidaLivenessEnumTypeHeader.h
//  VidaSilentLiveness
//
//  Created by Maheep on 05/02/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#ifndef VidaLivenessEnumTypeHeader_h
#define VidaLivenessEnumTypeHeader_h

/**
 * VidaSilentLiveness results
 */

typedef NS_ENUM (NSInteger, VidaSilentLivenessResult) {
    /** normal operation */
    VidaSilentLiveness_OK = 0,
    /** Illegal authorization file */
    VidaSilentLiveness_E_LICENSE_INVALID = 1,
    /** License file does not exist */
    VidaSilentLiveness_E_LICENSE_FILE_NOT_FOUND = 2,
    /** Incorrect authorization file binding package name */
    VidaSilentLiveness_E_LICENSE_BUNDLE_ID_INVALID = 3,
    /** Expired license file */
    VidaSilentLiveness_E_LICENSE_EXPIRE = 4,
    /** License file does not match SDK version */
    VidaSilentLiveness_E_LICENSE_VERSION_MISMATCH = 5,
    /** The authorization file does not support the current platform */
    VidaSilentLiveness_E_LICENSE_PLATFORM_NOT_SUPPORTED = 6,
    /** Illegal model file */
    VidaSilentLiveness_E_MODEL_INVALID = 7,
    /** DETECTION model file does not exist */
    VidaSilentLiveness_E_DETECTION_MODEL_FILE_NOT_FOUND = 8,
    /** Model file is out of date */
    VidaSilentLiveness_E_MODEL_EXPIRE = 9,
    /** Illegal parameter setting */
    VidaSilentLiveness_E_INVALID_ARGUMENT = 10,
    /** Detection scan timeout */
    VidaSilentLiveness_E_TIMEOUT = 11,
    /** API account information is incorrect. */
    VidaSilentLiveness_E_API_KEY_INVALID = 12,
    /** Server access error */
    VidaSilentLiveness_E_SERVER_ACCESS = 13,
    /** Server access timeout */
    VidaSilentLiveness_E_SERVER_TIMEOUT = 14,
    /** Incorrect API calling status */
    VidaSilentLiveness_E_CALL_API_IN_WRONG_STATE = 15,
    /** Run failed See VidaSilentLivenessFaceError for specific reasons */
    VidaSilentLiveness_E_FAILED = 16,
    /** Authorization file capability is not supported */
    VidaSilentLiveness_E_CAPABILITY_NOT_SUPPORTED = 17,
    /** ALIGNMENT model file does not exist */
    VidaSilentLiveness_E_ALIGNMENT_MODEL_FILE_NOT_FOUND = 18,
    /** FRAME_SELECTOR model file does not exist */
    VidaSilentLiveness_E_FRAME_SELECTOR_MODEL_FILE_NOT_FOUND = 19,
    /** ANTI_SPOOFING model file does not exist */
    VidaSilentLiveness_E_ANTI_SPOOFING_MODEL_FILE_NOT_FOUND = 20,

    VidaSilentLiveness_E_NOT_SUPPORTED_PLATFORM = 99,

};

/// The status of the silent live detection process
typedef NS_ENUM(NSInteger, VIDASilentLivenessStatus) {

    /// No face detected
    VIDASilentLivenessStatus_NO_FACE_FOUND,

    /// The eyebrows are covered
    VIDASilentLivenessStatus_FACE_OCCLUSION_BROW,
    
    /// The eyes are blocked
    VIDASilentLivenessStatus_FACE_OCCLUSION_EYE,
    
    /// The nose is blocked
    VIDASilentLivenessStatus_FACE_OCCLUSION_NOSE,
    
    /// The mouth is covered
    VIDASilentLivenessStatus_FACE_OCCLUSION_MOUTH,
    
    /// The face frame is too small and the face is too far from the screen
    VIDASilentLivenessStatus_FACE_TOO_FAR,
    
    /// The face frame is too big, the face is too close to the screen
    VIDASilentLivenessStatus_FACE_TOO_CLOSE,
    
    /// The face frame is not within the positioning frame
    VIDASilentLivenessStatus_FACE_OUT_BOUND,
    
    /// normal
    VIDASilentLivenessStatus_NORMAL,
};
#endif /* VIDASilentLivenessEnumType_h */
