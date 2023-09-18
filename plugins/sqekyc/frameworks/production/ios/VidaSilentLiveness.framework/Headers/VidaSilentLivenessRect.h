//
//  VidaSilentLivenessRect.h
//  VidaSilentLiveness
//
//  Created by Maheep on 05/02/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VidaSilentLivenessRect: NSObject
/**
 * Relative to the original image, the leftmost coordinates of the face frame
*/
@property (nonatomic, assign) NSInteger left;

/**
 * Relative to the original image, the top coordinates of the face frame
*/
@property (nonatomic, assign) NSInteger top;

/**
 * Relative to the original image, the rightmost coordinates of the face frame
*/
@property (nonatomic, assign) NSInteger right;

/**
 * Relative to the original image, the bottom coordinate of the face frame
*/
@property (nonatomic, assign) NSInteger bottom;

@end
