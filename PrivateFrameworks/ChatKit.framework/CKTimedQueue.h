/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSTimer, NSMutableArray;

@interface CKTimedQueue : NSObject  {
    NSTimer *_timer;
    NSMutableArray *_queue;
    id _delegate;
}

@property id delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_updateFireTimer;
- (id)dequeueItems;
- (void)enqueueItem:(id)arg1 fireDate:(id)arg2;
- (void)clearQueue;
- (void)_timerFired;

@end