/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXFileEditor.h>

@class NSImageView, NSMenu;

@interface PBXImageFileEditor : PBXFileEditor
{
    NSImageView *_imageView;
    NSMenu *_viewContextualMenu;
}

- (BOOL)allowsEditing;
- (id)imageView;
- (void)setDocument:(id)arg1;
- (void)viewDidLoad;
- (void)_removeDocument;
- (void)_installDocument;

@end

