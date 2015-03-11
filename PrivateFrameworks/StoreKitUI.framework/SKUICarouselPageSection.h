/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSIndexPath, NSObject<OS_dispatch_source>, NSString, SKUICarouselPageComponent, SKUIMissingItemLoader, SKUIViewElementLayoutContext, UICollectionView;

@interface SKUICarouselPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    UICollectionView *_carouselCollectionView;
    int _cellCount;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSObject<OS_dispatch_source> *_cycleTimer;
    } _itemSize;
    float _itemSpacing;
    SKUIMissingItemLoader *_missingItemLoader;
    NSArray *_modelObjects;
    BOOL _needsReload;
    NSIndexPath *_reloadIndexPath;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) SKUICarouselPageComponent * pageComponent;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (float)_actualContentWidth;
- (void)_addImpressionForIndex:(int)arg1 toSession:(id)arg2;
- (void)_cancelCycleTimer;
- (id)_carouselCollectionView;
- (Class)_cellClassForLockup:(id)arg1;
- (Class)_cellClassForViewElement:(id)arg1;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (void)_fireCycleTimer;
- (BOOL)_isItemEnabledAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })_legacyItemSize;
- (float)_legacyItemSpacing;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (id)_missingItemLoader;
- (void)_reloadLegacySizing;
- (void)_reloadViewElementProperties;
- (void)_startCycleTimerIfNecessary;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (int)applyUpdateType:(int)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (int)defaultItemPinningStyle;
- (id)initWithPageComponent:(id)arg1;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (int)numberOfCells;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end