// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from yaml-test.djinni

#import "DBClientReturnedRecord.h"
#import <Foundation/Foundation.h>
@class DBReverseClientInterface;


@interface DBReverseClientInterface : NSObject

- (nonnull NSString *)returnStr;

- (nonnull NSString *)methTakingInterface:(nullable DBReverseClientInterface *)i;

- (nonnull NSString *)methTakingOptionalInterface:(nullable DBReverseClientInterface *)i;

- (nonnull NSArray<DBClientReturnedRecord *> *)methTakingAndReturningRecordList:(nonnull NSArray<DBClientReturnedRecord *> *)rl;

+ (nullable DBReverseClientInterface *)create;

@end
