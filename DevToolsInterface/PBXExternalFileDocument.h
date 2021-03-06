/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXFileDocument.h>

@interface PBXExternalFileDocument : PBXFileDocument
{
    id <PBXExternalEditorClientProtocol> _externalEditorProxy;
    BOOL _isDirty;
}

+ (void)logExternalFileDocuments:(id)arg1;
+ (id)externalFileDocumentsWithEditor:(id)arg1;
+ (id)externalFileDocuments;
- (BOOL)showAndMakeActive;
- (BOOL)showAndSelectLine:(unsigned long long)arg1;
- (BOOL)showAndSelectFromLine:(unsigned long long)arg1 toLine:(unsigned long long)arg2;
- (void)updateDiskStateInfo;
- (int)diskState;
- (void)openForUI;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)setDocumentEdited:(BOOL)arg1;
- (BOOL)isDocumentEdited;
- (void)_handleDocumentFileChanges:(id)arg1;
- (void)saveDocument:(id)arg1;
- (BOOL)readFromFile:(id)arg1 ofType:(id)arg2;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2;
- (id)externalEditor;
- (void)setExternalEditor:(id)arg1;
- (void)dealloc;
- (id)initWithFile:(id)arg1 externalEditor:(id)arg2 isDirty:(BOOL)arg3;
- (id)initWithFile:(id)arg1 externalEditor:(id)arg2;

@end

