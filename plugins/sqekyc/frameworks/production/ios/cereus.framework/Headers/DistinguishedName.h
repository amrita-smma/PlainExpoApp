//
//  DistinguishedName.h
//  libms
//
//  Created by Maheep on 04/05/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DistinguishedName : NSObject

/** Country name */
@property(nonatomic, strong) NSString* country;

/** Organization name */
@property(nonatomic, strong) NSString* org;

/** Organizational Unit name */
@property(nonatomic, strong) NSString* orgUnit;

/** State or Province name */
@property(nonatomic, strong) NSString* state;

/** Common name */
@property(nonatomic, strong) NSString* commonName;

-(NSString *) toSimple;

@end

NS_ASSUME_NONNULL_END
