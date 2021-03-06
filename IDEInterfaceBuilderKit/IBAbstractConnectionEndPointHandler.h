/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IBConnectionPopUpMenuDelegate-Protocol.h"

@class DVTStackBacktrace, IBDocument, NSArray, NSEvent, NSView, NSWindow;

@interface IBAbstractConnectionEndPointHandler : NSObject <IBConnectionPopUpMenuDelegate, DVTInvalidation>
{
    IBDocument *_document;
    id <IBEndPointProvider> _endPointProvider;
    NSView *_endPointProviderView;
    NSEvent *_finalEvent;
    id _target;
    NSArray *_springLoadedTraversal;
}

+ (void)initialize;
@property(copy) NSArray *springLoadedTraversal; // @synthesize springLoadedTraversal=_springLoadedTraversal;
@property(retain) id target; // @synthesize target=_target;
@property(retain) NSEvent *finalEvent; // @synthesize finalEvent=_finalEvent;
@property(retain) NSView *endPointProviderView; // @synthesize endPointProviderView=_endPointProviderView;
@property(retain) id <IBEndPointProvider> endPointProvider; // @synthesize endPointProvider=_endPointProvider;
@property(readonly) IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)constraintsForConnectingFromObject:(id)arg1;
- (id)targetToSendToEndPointProviderForConnectionSuccess;
- (id)connectionForConnectingFromAnnotation:(id)arg1;
- (id)presentDisambiguatingPopupForAnnotationConnections:(id)arg1;
- (void)connectionMenu:(id)arg1 willHighlightItem:(id)arg2;
- (id)connectionForPrototype:(id)arg1 interfaceStyle:(id)arg2;
- (id)connectionForConnectingFromObject:(id)arg1;
@property(readonly) NSWindow *destinationWindow;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

