/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDConditionalFormatting, EDHyperlink, EDReference, EDResources, EDWorksheet;

@interface EDRow : EDSortedCollection <EDKeyedObject> {
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
    EDConditionalFormatting *mConditionalFormatting;
    double mHeight;
    EDHyperlink *mHyperlink;
    EDReference *mMergedCells;
    EDResources *mResources;
    NSInteger mRowNumber;
    NSUInteger mStyleIndex;
    EDWorksheet *mWorksheet;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mCustomHeight;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mHidden;
}

+ (id)rowWithResources:(id)arg1;

- (void)addCell:(id)arg1;
- (id)cellAtIndex:(NSUInteger)arg1;
- (NSUInteger)cellCount;
- (id)cellCreateIfNilWithColumnNumber:(NSInteger)arg1;
- (id)cellWithColumnNumber:(NSInteger)arg1;
- (void)clearBackpointers;
- (id)conditionalFormatting;
- (id)createCellWithColumnNumber:(NSInteger)arg1;
- (void)dealloc;
- (void)doneWithContent;
- (double)height;
- (id)hyperlink;
- (id)initWithResources:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isCustomHeight;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isHidden;
- (NSInteger)key;
- (id)mergedCells;
- (NSInteger)rowNumber;
- (void)setConditionalFormatting:(id)arg1;
- (void)setCustomHeight:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setHeight:(double)arg1;
- (void)setHidden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setHyperlink:(id)arg1;
- (void)setMergedCells:(id)arg1;
- (void)setRowNumber:(NSInteger)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleIndex:(NSUInteger)arg1;
- (void)setWorksheet:(id)arg1;
- (id)style;
- (NSUInteger)styleIndex;
- (id)worksheet;

@end