/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEInMemoryLogStore.h>

@interface IDEInMemoryLogStore_Impl : IDEInMemoryLogStore
{
}

- (BOOL)preserveOldLogs;
- (void)setPreserveOldLogs:(BOOL)arg1;
- (void)_removeLogRecord:(id)arg1 completionBlock:(id)arg2;
- (id)addLog:(id)arg1 schemeIdentifier:(id)arg2 completionBlock:(id)arg3;

@end
