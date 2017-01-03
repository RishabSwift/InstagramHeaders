//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface IGKeyboardManager : NSObject
{
    _Bool _keyboardIsVisible;
    double _keyboardAnimationDuration;
    long long _keyboardAnimationCurve;
    double _keyboardHeight;
}

+ (id)sharedKeyboardManager;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) UIView *keyboard;
@property(nonatomic) long long keyboardAnimationCurve; // @synthesize keyboardAnimationCurve=_keyboardAnimationCurve;
@property(nonatomic) double keyboardAnimationDuration; // @synthesize keyboardAnimationDuration=_keyboardAnimationDuration;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(readonly, nonatomic) _Bool keyboardIsVisible; // @synthesize keyboardIsVisible=_keyboardIsVisible;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)warmKeyboard;

@end
