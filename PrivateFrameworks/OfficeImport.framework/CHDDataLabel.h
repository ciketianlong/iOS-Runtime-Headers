/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class OADGraphicProperties, EDResources;



@interface CHDDataLabel : NSObject 
{
    EDResources *mResources;
    NSUInteger mStringIndex;
    NSUInteger mContentFormatId;
    NSInteger mPosition;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowLeaderLines;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowCategoryName;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowSeriesName;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowPercent;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowValue;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mShowLegendKey;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsPositionAffineTransform;

    double mRotation;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataLabelWithResources:(id)arg1;

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isShowLeaderLines;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isShowCategoryName;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isShowSeriesName;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isShowPercent;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isShowLegendKey;
     /* Encoded args for previous method: B8@0:4 */

- (void)setIsPositionAffineTransform:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isPositionAffineTransform;
     /* Encoded args for previous method: B8@0:4 */

- (double)rotationAngle;
- (NSUInteger)stringIndex;
- (void)setStringIndex:(NSUInteger)arg1;
- (void)setShowLeaderLines:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setShowCategoryName:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setShowPercent:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setGraphicProperties:(id)arg1;
- (void)setShowLegendKey:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setShowSeriesName:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setRotationAngle:(double)arg1;
- (void)setContentFormatId:(NSUInteger)arg1;
- (void)setContentFormat:(id)arg1;
- (id)initWithResources:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isShowValue;
     /* Encoded args for previous method: B8@0:4 */

- (NSUInteger)contentFormatId;
- (id)contentFormat;
- (id)graphicProperties;
- (void)setShowValue:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setString:(id)arg1;
- (id)string;
- (NSInteger)position;
- (void)setPosition:(NSInteger)arg1;
- (void)dealloc;

@end