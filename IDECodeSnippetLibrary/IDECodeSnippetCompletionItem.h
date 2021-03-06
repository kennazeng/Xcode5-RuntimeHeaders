/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTTextCompletionItem-Protocol.h"

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDECodeSnippetCompletionItem : NSObject <DVTTextCompletionItem>
{
    NSAttributedString *_descriptionText;
    NSString *_completionText;
    NSString *_displayText;
    NSString *_displayType;
    double _priority;
    NSString *_name;
    NSImage *_icon;
}

+ (id)infoViewControllerFont;
@property(readonly) NSImage *icon; // @synthesize icon=_icon;
@property(readonly) NSAttributedString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly) NSString *completionText; // @synthesize completionText=_completionText;
@property(readonly) NSString *displayType; // @synthesize displayType=_displayType;
@property(readonly) NSString *displayText; // @synthesize displayText=_displayText;
@property double priority; // @synthesize priority=_priority;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(id)arg3;
@property(readonly) BOOL notRecommended;
@property(readonly) NSString *parentText;
- (id)initWithCodeSnippet:(id)arg1;

// Remaining properties
@property(readonly) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;

@end

