//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface FBKeyboardObserver : NSObject
{
    _Bool _observingKeyboardNotifications;
    _Bool _keyboardAppearing;
    _Bool _keyboardDisappearing;
    _Bool _keyboardAnimating;
    _Bool _keyboardVisible;
    id <FBKeyboardObserverDelegate> _delegate;
    UIView *_owner;
}

- (void).cxx_destruct;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardFrameDidChange:(id)arg1;
- (void)_keyboardFrameWillChange:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_resetKeyboardState;
- (void)dealloc;
@property(nonatomic) __weak id <FBKeyboardObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool keyboardAnimating; // @synthesize keyboardAnimating=_keyboardAnimating;
@property(readonly, nonatomic) _Bool keyboardAppearing; // @synthesize keyboardAppearing=_keyboardAppearing;
@property(readonly, nonatomic) _Bool keyboardDisappearing; // @synthesize keyboardDisappearing=_keyboardDisappearing;
@property(readonly, nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) __weak UIView *owner; // @synthesize owner=_owner;
- (void)startObservingKeyboardNotifications;
- (void)stopObservingKeyboardNotifications;

@end
