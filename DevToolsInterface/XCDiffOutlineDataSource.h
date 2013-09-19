/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCDiffObjectDataSource.h>

#import "PBXTableColumnProvider-Protocol.h"

@interface XCDiffOutlineDataSource : XCDiffObjectDataSource <PBXTableColumnProvider>
{
}

+ (Class)objectControllerClass;
+ (void)initialize;
- (id)submenuItem;
- (id)menuTitleForIdentifier:(id)arg1;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)removeColumnForIdentifier:(id)arg1 fromTable:(id)arg2;
- (id)addColumnForIdentifier:(id)arg1 toTable:(id)arg2;
- (id)optionalColumnIdentifiers:(id)arg1;
- (id)requiredColumnIdentifiers:(id)arg1;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (struct _XCDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)_treeNodeForDescriptor:(id)arg1;
- (id)_treeNodeForDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)_modifiedIndexPathForDiffDescriptor:(id)arg1;
- (id)_originalIndexPathForDiffDescriptor:(id)arg1;
- (id)arrangedContent;
- (id)initWithContent:(id)arg1;

@end
