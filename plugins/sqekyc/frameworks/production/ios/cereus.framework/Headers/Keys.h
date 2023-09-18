//
//  Keys.h
//  cereus
//
//  Created by Madhur Tewani on 08/12/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Keys : NSObject

/** Identifier for ECDSA. */
extern NSInteger const ECDSA;

/** Identifier for ECDH. */
extern NSInteger const ECDH;

/** Identifier for RSA 2048. */
extern NSInteger const RSA_2K;

/** Identifier for RSA 4096. */
extern NSInteger const RSA_4K;

/** Identifier for RSA 8192. */
extern NSInteger const RSA_8K;

@end

NS_ASSUME_NONNULL_END
