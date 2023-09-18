//
//  Astra.h
//  cereus
//
//  Created by Tabrez Pasha on 10/11/21.
//

#import <Foundation/Foundation.h>
#import <cereus/DistinguishedName.h>
#import <cereus/CertificateInfo.h>
#import <cereus/AttestedData.h>
#import <cereus/CsrInfo.h>

NS_ASSUME_NONNULL_BEGIN

@interface Astra : NSObject

+(instancetype)sharedInstance;

-(NSData *)AESEncrypt:(NSString *)plainText;
-(NSString *)AESDecrypt:(NSData *)cipherData;
-(NSString *)createCSRRequest:(NSInteger)keyIndex type:(NSInteger)keyType name:(DistinguishedName *)distinguishedName;
-(CsrInfo *)createCSRRequestInfo:(DistinguishedName *)distinguishedName;
-(NSString *)generateHMACFor:(NSString *)inputString atIndex:(NSInteger)index;

-(BOOL)storeData:(NSString *)key value:(NSString *)value;
-(NSString *)readData:(NSString *)key;
-(BOOL)deleteData:(NSString *)key;

-(NSData *)encryptForSession:(NSData *)ref data:(NSData *)data;
-(NSData *)decryptForSession:(NSData *)ref data:(NSData *)data;

-(NSString *)getSignature:(NSInteger)index data:(NSData *)data;
-(NSString *)generateKeyRSA:(NSInteger)size index:(NSInteger)index;

-(NSString *)getDeviceId;

-(BOOL)setCertPassword:(NSString *)oldPasswd newPasswd:(NSString *)newPasswd;
-(NSInteger)getCertAttempts;
-(BOOL)setCertInfo:(CertificateInfo *)certInfo passwd:(NSString *)passwd;
-(CertificateInfo *)getCertInfo:(NSInteger)index passwd:(NSString *)passwd;
-(BOOL)delCertInfo:(NSInteger)index passwd:(NSString *)passwd;

-(AttestedData *)attestData:(NSString *)data;
-(AttestedData *)getAttestedDeviceId;

@end

NS_ASSUME_NONNULL_END
