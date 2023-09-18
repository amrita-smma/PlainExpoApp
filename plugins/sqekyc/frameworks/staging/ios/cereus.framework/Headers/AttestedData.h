//
//  AttestedData.h
//  libms
//
//  Created by Maheep on 16/06/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString* ATTESTED_DATA_TAG = @"ATTESTED_DATA: ";

@interface AttestedData : NSObject

/** Base64 of attested data. */
@property(nonatomic, strong) NSString* dataValue;

/** Base64 of ASN1 encoded ECDSA P256 signature. */
@property(nonatomic, strong) NSString* sign;

/** Base64 of attestation certificate chain. */
@property(nonatomic, strong) NSString* chain;

/** Base64 of device Id. */
@property(nonatomic, strong) NSString* deviceId;

/** Base64 of timestamp */
@property(nonatomic, strong) NSString* timeStamp;

- (void) setData:(NSMutableData*) buf;

@end


