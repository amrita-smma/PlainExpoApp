//
//  CsrInfo.h
//  libms
//
//  Created by Maheep on 04/07/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CsrInfo : NSObject

/**
 * Key index
 */
@property(nonatomic, assign) NSInteger keyIndex;

/**
 * CSR data.
 */
@property(nonatomic, strong) NSString* data;

- (instancetype)initWithKeyIndex : (NSInteger) _keyIndex : (NSString*)_data;

@end
