//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILongPressGestureRecognizer.h"

@class UIImpactFeedbackGenerator;

@interface IGForceTouchGestureRecognizer : UILongPressGestureRecognizer
{
    double _forceTouchThreshold;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) double forceTouchThreshold; // @synthesize forceTouchThreshold=_forceTouchThreshold;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesDidReachForceThreshold:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

