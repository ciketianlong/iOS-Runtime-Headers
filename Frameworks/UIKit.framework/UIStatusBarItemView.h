/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarItem, UIStatusBarLayoutManager;

@interface UIStatusBarItemView : UIView {
    BOOL _allowsUpdates;
    float _currentOverlap;
    int _foregroundStyle;
    struct CGContext { } *_imageContext;
    float _imageContextScale;
    UIStatusBarItem *_item;
    UIStatusBarLayoutManager *_layoutManager;
    BOOL _visible;
}

@property BOOL allowsUpdates;
@property(readonly) int foregroundStyle;
@property(readonly) UIStatusBarItem * item;
@property UIStatusBarLayoutManager * layoutManager;
@property(getter=isVisible) BOOL visible;

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(int)arg4;
+ (id)imageNamed:(id)arg1 forForegroundStyle:(int)arg2;

- (void)_drawText:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 textAlignment:(int)arg6;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)allowsUpdates;
- (BOOL)animatesDataChange;
- (BOOL)animatesFrameChange;
- (void)beginImageContextWithMinimumWidth:(float)arg1;
- (id)contentsImageForStyle:(int)arg1;
- (float)currentLeftOverlap;
- (float)currentOverlap;
- (float)currentRightOverlap;
- (void)dealloc;
- (id)description;
- (void)drawText:(id)arg1 forStyle:(int)arg2 forWidth:(float)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5;
- (void)drawText:(id)arg1 forStyle:(int)arg2;
- (void)endImageContext;
- (float)extraLeftPadding;
- (float)extraRightPadding;
- (int)foregroundStyle;
- (id)imageFromImageContextClippedToWidth:(float)arg1;
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(int)arg4;
- (BOOL)isVisible;
- (id)item;
- (id)layoutManager;
- (float)maximumOverlap;
- (void)performPendedActions;
- (void)setAllowsUpdates:(BOOL)arg1;
- (void)setCurrentOverlap:(float)arg1;
- (void)setLayoutManager:(id)arg1;
- (float)setStatusBarData:(id)arg1 actions:(int)arg2;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (void)setVisible:(BOOL)arg1;
- (float)shadowPadding;
- (float)shadowPaddingForStyle:(int)arg1;
- (float)standardPadding;
- (int)textAlignment;
- (id)textColorForStyle:(int)arg1;
- (id)textFont;
- (float)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (BOOL)usesSmallerTextFont;

@end