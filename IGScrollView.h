//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableSet, NSString;

@interface IGScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    NSMutableSet *_blockedGestures;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *blockedGestures; // @synthesize blockedGestures=_blockedGestures;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setContentSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
