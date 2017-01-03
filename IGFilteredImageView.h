//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageView.h"

#import "IGFilterMediaViewType.h"

@class IGAdjustController, IGContext, IGOverlayFilterView, IGPostPipelineFilter, NSString, UIImage;

@interface IGFilteredImageView : IGImageView <IGFilterMediaViewType>
{
    IGContext *_renderingContext;
    IGAdjustController *_adjustController;
    IGPostPipelineFilter *_postPipelineFilter;
    IGOverlayFilterView *_overlayFilteredView;
    UIImage *_originalImage;
    struct CGSize _filteredRenderSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGAdjustController *adjustController; // @synthesize adjustController=_adjustController;
- (id)filterImage:(id)arg1 withFilter:(id)arg2;
@property(nonatomic) struct CGSize filteredRenderSize; // @synthesize filteredRenderSize=_filteredRenderSize;
- (id)getSurfaceFromImage:(id)arg1;
- (void)hideOverlayFilter;
- (id)initWithImage:(id)arg1;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) IGOverlayFilterView *overlayFilteredView; // @synthesize overlayFilteredView=_overlayFilteredView;
@property(retain, nonatomic) IGPostPipelineFilter *postPipelineFilter; // @synthesize postPipelineFilter=_postPipelineFilter;
@property(retain, nonatomic) IGContext *renderingContext; // @synthesize renderingContext=_renderingContext;
- (void)setFilter:(id)arg1;
- (void)setOverlayFilter:(id)arg1;
- (void)setOverlayFilterNeedsRemoval;
- (void)setOverlayFilterWidth:(double)arg1 overlayFilterPosition:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

