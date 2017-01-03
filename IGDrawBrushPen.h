//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDrawBrush.h"

@class NSString, UIColor;

@interface IGDrawBrushPen : NSObject <IGDrawBrush>
{
    struct CGSize _layerSize;
    UIColor *_color;
    double _size;
}

- (void).cxx_destruct;
- (void)applyShadowOnLayerIfNeeded:(struct CGContext *)arg1;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)drawPoint:(id)arg1 forLayerContext:(struct CGContext *)arg2;
- (id)init;
@property(readonly, nonatomic) NSString *name;
- (void)onDrawingStopped:(struct CGContext *)arg1;
- (int)pathDrawingMode;
- (void)setLayerContextSize:(struct CGSize)arg1;
@property(nonatomic) double size; // @synthesize size=_size;
- (void)setupLayerContext:(struct CGContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

