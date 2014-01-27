/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTStringTextCompletionItem.h"

#import "DVTTextCompletionItem-Protocol.h"

@class DVTFilePath, NSArray, NSAttributedString, NSImage, NSString;

@interface IDEFilePathTextCompletionItem : DVTStringTextCompletionItem <DVTTextCompletionItem>
{
    DVTFilePath *_filePath;
}

@property(copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
@property(readonly) NSImage *icon;
- (id)initWithName:(id)arg1 filePath:(id)arg2;

// Remaining properties
@property(readonly) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly) NSString *completionText;
@property(readonly) NSAttributedString *descriptionText;
@property(readonly) NSString *displayText;
@property(readonly) NSString *displayType;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSString *name;
@property(readonly) BOOL notRecommended;
@property(readonly) NSString *parentText;
@property double priority;
@property(readonly) NSImage *statusIcon;

@end
