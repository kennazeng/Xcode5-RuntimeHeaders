/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBSourceCodeParser.h>

@class NSMutableArray, NSString;

@interface IBObjcParser : IBSourceCodeParser
{
    long long errorLine;
    NSString *errorFile;
    NSMutableArray *descriptions;
}

+ (BOOL)useClassicMethodParsing;
+ (id)secondaryParsableFileTypeIdentifiers;
+ (id)primaryParsableFileTypeIdentifiers;
+ (id)supportedFileExtensions;
- (void).cxx_destruct;
- (id)parseData:(id)arg1 fromFile:(id)arg2 errors:(id *)arg3;
- (void)resetParseState;
- (BOOL)parseClass:(CDStruct_30f319a3 *)arg1;
- (BOOL)addMethodsUsingState:(CDStruct_30f319a3 *)arg1 intoActions:(id)arg2 andOutlets:(id)arg3;
- (BOOL)addMethodsUsingState:(CDStruct_30f319a3 *)arg1 intoActions:(id)arg2 outlets:(id)arg3 andToManyOutlets:(id)arg4;

@end
