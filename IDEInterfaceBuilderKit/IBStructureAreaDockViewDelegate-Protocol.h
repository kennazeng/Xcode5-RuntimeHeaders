/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IBStructureAreaDockViewDelegate <NSObject>
- (void)dockViewPerformPaste:(id)arg1;
- (BOOL)dockViewCanPaste:(id)arg1;
- (void)dockView:(id)arg1 duplicateRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canDuplicateRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 cutRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canCutRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 copyRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canCopyRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 deleteRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canDeleteRepresentedObjects:(id)arg2;
- (id)dockView:(id)arg1 draggedImageState:(id)arg2;
- (void)dockView:(id)arg1 draggingEnded:(id)arg2;
- (void)dockView:(id)arg1 draggingExited:(id)arg2;
- (void)dockView:(id)arg1 concludeDragOperation:(id)arg2;
- (BOOL)dockView:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)dockView:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)dockView:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)dockView:(id)arg1 draggingEntered:(id)arg2;
- (id)dockView:(id)arg1 dragIdentifierForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (void)userDidChangeSelectionFromOverflowMenuForDockView:(id)arg1;
- (void)dockView:(id)arg1 representedObjectWasSelectedFromOverflowMenu:(id)arg2 inGroup:(id)arg3;
- (BOOL)dockView:(id)arg1 shouldSelectObjectFromOverflowMenu:(id)arg2 inGroup:(id)arg3;
- (void)dockView:(id)arg1 representedObject:(id)arg2 inGroup:(id)arg3 wasDraggedWithMouseDown:(id)arg4 mouseDragged:(id)arg5;
- (void)dockView:(id)arg1 representedObject:(id)arg2 inGroup:(id)arg3 wasClickedWithInitialEvent:(id)arg4;
- (void)dockView:(id)arg1 userDidChangeSelectionWithEvent:(id)arg2;
- (BOOL)dockView:(id)arg1 shouldSelectObject:(id)arg2 inGroup:(id)arg3 withEvent:(id)arg4;
- (long long)dockView:(id)arg1 minimumNumberOfItemsInGroup:(id)arg2;
- (id)dockView:(id)arg1 imageForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (BOOL)dockView:(id)arg1 isShowingOpenIndicatorForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (id)dockView:(id)arg1 titleForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (id)dockView:(id)arg1 representedObjectsForGroup:(id)arg2;
- (id)dockView:(id)arg1 titleOfRepresentedGroup:(id)arg2;
- (id)dockViewRepresentedGroups:(id)arg1;
- (void)dockViewWillValidateData:(id)arg1;

@optional
- (void)dockView:(id)arg1 didReceiveMouseDownInBackground:(id)arg2;
@end
