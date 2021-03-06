/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewReorderedItem : NSObject {
    UICollectionViewCell * _cell;
    NSIndexPath * _originalIndexPath;
    BOOL  _pinned;
    struct CGPoint { 
        float x; 
        float y; 
    }  _pinnedPreviousContentOffset;
    id /* block */  _pinningTest;
    NSIndexPath * _targetIndexPath;
}

@property (nonatomic, readonly) UICollectionViewCell *cell;
@property (nonatomic, retain) NSIndexPath *originalIndexPath;
@property (nonatomic) BOOL pinned;
@property (nonatomic) struct CGPoint { float x1; float x2; } pinnedPreviousContentOffset;
@property (nonatomic, copy) id /* block */ pinningTest;
@property (nonatomic, retain) NSIndexPath *targetIndexPath;

- (void).cxx_destruct;
- (id)cell;
- (id)initWithCell:(id)arg1 indexPath:(id)arg2;
- (id)originalIndexPath;
- (BOOL)pinned;
- (struct CGPoint { float x1; float x2; })pinnedPreviousContentOffset;
- (id /* block */)pinningTest;
- (void)setOriginalIndexPath:(id)arg1;
- (void)setPinned:(BOOL)arg1;
- (void)setPinnedPreviousContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPinningTest:(id /* block */)arg1;
- (void)setTargetIndexPath:(id)arg1;
- (id)targetIndexPath;

@end
