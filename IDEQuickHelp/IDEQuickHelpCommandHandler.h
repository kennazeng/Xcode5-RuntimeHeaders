/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDECommandHandler-Protocol.h"

@interface IDEQuickHelpCommandHandler : NSObject <IDECommandHandler>
{
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
- (void)_showQuickHelpInternal:(id)arg1;
- (void)showQuickHelp:(id)arg1;
- (void)showDocumentationForSymbol:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;

@end

