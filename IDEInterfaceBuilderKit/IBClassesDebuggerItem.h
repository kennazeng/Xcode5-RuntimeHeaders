/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSImage, NSString;

@interface IBClassesDebuggerItem : NSObject
{
    NSArray *_childItems;
    NSString *_subtitle;
    NSString *_title;
    NSImage *_image;
    BOOL _topLevel;
}

@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(getter=isTopLevel) BOOL topLevel; // @synthesize topLevel=_topLevel;
@property(retain) NSArray *childItems; // @synthesize childItems=_childItems;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)navigableItem_image;
- (id)navigableItem_name;
- (id)initWithTitle:(id)arg1;

@end

