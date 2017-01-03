//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAnnouncer.h"

#import "UITextViewDelegate.h"

@class NSString;

@interface IGTextViewAnnouncer : IGAnnouncer <UITextViewDelegate>
{
    id <IGTextViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
@property(nonatomic) __weak id <IGTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeListener:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

