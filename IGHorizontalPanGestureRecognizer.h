//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class UITouch;

@interface IGHorizontalPanGestureRecognizer : UIGestureRecognizer
{
    double _currentTime;
    double _lastTime;
    struct CGPoint _currentPoint;
    struct CGPoint _lastPoint;
    struct CGPoint _startDeltas;
    _Bool _rightToLeftPanDisabled;
    _Bool _leftToRightPanDisabled;
    UITouch *_touch;
    struct CGPoint _startPoint;
}

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) _Bool leftToRightPanDisabled; // @synthesize leftToRightPanDisabled=_leftToRightPanDisabled;
- (struct CGPoint)locationInView:(id)arg1;
- (void)reset;
@property(nonatomic) _Bool rightToLeftPanDisabled; // @synthesize rightToLeftPanDisabled=_rightToLeftPanDisabled;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
- (struct CGPoint)startPointInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)translation;
- (struct CGPoint)velocity;

@end

