/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class DVTSourceTextView, NSArray;

@protocol IDETextVisualizationHost
@property(readonly) NSArray *visualizations;
@property(readonly) DVTSourceTextView *textView;
- (void)removeVisualization:(id)arg1 fadeOut:(BOOL)arg2 completionBlock:(id)arg3;
- (void)addVisualization:(id)arg1 fadeIn:(BOOL)arg2 completionBlock:(id)arg3;
@end

