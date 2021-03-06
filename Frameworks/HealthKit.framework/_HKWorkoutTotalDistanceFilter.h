/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutTotalDistanceFilter : _HKFilter {
    unsigned int  _operatorType;
    HKQuantity * _totalDistance;
}

@property (nonatomic, readonly) unsigned int operatorType;
@property (nonatomic, readonly) HKQuantity *totalDistance;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithTotalDistance:(id)arg1 operatorType:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)operatorType;
- (id)totalDistance;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
