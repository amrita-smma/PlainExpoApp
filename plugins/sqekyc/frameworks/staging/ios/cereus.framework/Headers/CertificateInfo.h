//
//  CertificateInfo.h
//  cereus
//
//  Created by Madhur Tewani on 03/12/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CertificateInfo : NSObject

/** The slot is free. */
extern NSInteger const CERT_SLOT_FREE;

/** The slot is used. */
extern NSInteger const CERT_SLOT_USED;

/** Certificate level 1. */
extern NSInteger const CERT_LEVEL_1;

/** Certificate level 2. */
extern NSInteger const CERT_LEVEL_2;

/** Certificate level 3. */
extern NSInteger const CERT_LEVEL_3;

/** Certificate level 4. */
extern NSInteger const CERT_LEVEL_4;

/** Certificate level - Not Used. */
extern NSInteger const CERT_LEVEL_NONE;

/** Certificate use: Consent signing without repudiation. */
extern NSInteger const CERT_PURPOSE_CONSENT;

/** Certificate use: Document signing with non-repudiation. */
extern NSInteger const CERT_PURPOSE_SIGN;

/** Certificate use: Not used. */
extern NSInteger const CERT_PURPOSE_NONE;

/**
 * Status of the slot.
 */
@property(nonatomic, assign)NSInteger status;

/**
 * Certificate level (if used).
 */
@property(nonatomic, assign)NSInteger level;

/**
 * Purpose of certificate (if used).
 */
@property(nonatomic, assign)NSInteger purpose;

/**
 * Jurisdiction of certificate (if used).
 */
@property(nonatomic, strong)NSString *jurisdiction;

/**
 * Index of key-pair corresponding to certificate (if used).
 */
@property(nonatomic, assign)NSInteger keyIndex;

- (void)certificateInfomation;

- (void)certificateInfo : (NSInteger) certStatus : (NSInteger)certLevel : (NSInteger)certPurpose : (NSString*)certJurisdiction : (NSInteger)certKeyIdx;

- (BOOL)isFree;

@end

NS_ASSUME_NONNULL_END
