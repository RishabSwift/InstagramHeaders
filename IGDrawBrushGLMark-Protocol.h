//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IGDrawBrushGLMark <NSObject>
+ (id)new;
- (void)addSample:(struct _IGTouchSample)arg1;
@property(readonly, nonatomic) id <IGDrawBrushGL> brush;
- (void)draw;
- (void)drawIncremental;
- (void)endWith:(struct _IGTouchSample)arg1;
@property(nonatomic) _Bool hadToStopDueToFullBuffer;
- (void)idle;
- (id)init;
- (id)initWithBrush:(id <IGDrawBrushGL>)arg1;
- (void)prepareToDraw;
- (void)startWith:(struct _IGTouchSample)arg1;
@property(readonly, nonatomic) _Bool supportsIncrementalDrawing;
@end

