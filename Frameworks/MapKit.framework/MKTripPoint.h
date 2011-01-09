/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, NSError, CLHeading;



@interface MKTripPoint : NSObject 
{
    NSInteger _pointType;
    NSInteger _commandType;
    CLHeading *_heading;
    CLLocation *_location;
    NSInteger _locationSource;
    NSError *_error;
}

@property NSInteger locationSource;
@property NSInteger commandType;
@property NSInteger pointType;
@property(retain) NSError *error;
@property(retain) CLLocation *location;
@property(retain) CLHeading *heading;

+ (id)tripPoint;

- (void)setHeading:(id)arg1;
- (void)setLocationSource:(NSInteger)arg1;
- (NSInteger)locationSource;
- (NSInteger)pointType;
- (void)setPointType:(NSInteger)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)dealloc;
- (void)setError:(id)arg1;
- (NSInteger)commandType;
- (void)setCommandType:(NSInteger)arg1;
- (id)error;
- (id)heading;

@end