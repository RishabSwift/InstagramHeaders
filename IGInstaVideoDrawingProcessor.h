//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGInstaVideoBroadcastProductionVideoProcessor.h"

@class IGContext, IGImageOverlayFilter, IGStoryCreationDrawingViewController, IGSurface, NSString;

@interface IGInstaVideoDrawingProcessor : NSObject <IGInstaVideoBroadcastProductionVideoProcessor>
{
    IGContext *_igContext;
    IGSurface *_outputSurface;
    IGImageOverlayFilter *_overlayFilter;
    struct CGContext *_drawingContext;
    IGStoryCreationDrawingViewController *_drawingViewController;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) struct CGContext *drawingContext; // @synthesize drawingContext=_drawingContext;
@property(readonly, nonatomic) __weak IGStoryCreationDrawingViewController *drawingViewController; // @synthesize drawingViewController=_drawingViewController;
@property(readonly, nonatomic) IGContext *igContext; // @synthesize igContext=_igContext;
- (id)initWithDrawingViewController:(id)arg1 captureBufferSize:(struct CGSize)arg2;
@property(readonly, nonatomic) IGSurface *outputSurface; // @synthesize outputSurface=_outputSurface;
@property(readonly, nonatomic) IGImageOverlayFilter *overlayFilter; // @synthesize overlayFilter=_overlayFilter;
- (struct opaqueCMSampleBuffer *)processVideo:(struct opaqueCMSampleBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

