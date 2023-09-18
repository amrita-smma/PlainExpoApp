//
//  VidaSilentLivenessImage.h
//  VidaSilentLiveness
//
//  Created by Maheep on 05/02/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface VidaSilentLivenessImage: NSObject

/**
 * Picture
 */
@property (strong, nonatomic) UIImage * image;

/**
 * Picture Data
 */
@property (strong, nonatomic) NSData * data;

/**
 * The position of the picture in the action sequence, 0 is the first
 */
@property (assign, nonatomic) NSInteger index;

@end
