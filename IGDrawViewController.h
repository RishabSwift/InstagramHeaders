//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class IGDrawCanvasView, UITouch, UIView;

@interface IGDrawViewController : UIViewController
{
    UIView *_canvasView;
    IGDrawCanvasView *_drawCanvasView;
    long long _canvasType;
    id <IGDrawCanvasType> _canvas;
    struct CGSize _bitmapSize;
    UITouch *_singleTouch;
    struct CGSize _initialSize;
    union _GLKVector2 _lastPosition;
    double _currentStrokeLength;
    id <IGDrawBrushCommon> _drawBrush;
    id <IGDrawControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canUndo;
- (void)clearDrawing;
- (id)createDrawingImage;
@property(nonatomic) __weak id <IGDrawControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IGDrawBrushCommon> drawBrush; // @synthesize drawBrush=_drawBrush;
@property(readonly, nonatomic) _Bool hasDrawing;
- (id)initWithCanvasType:(long long)arg1 bitmapSize:(struct CGSize)arg2 initialSize:(struct CGSize)arg3;
- (void)loadView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)undoLastStroke;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

