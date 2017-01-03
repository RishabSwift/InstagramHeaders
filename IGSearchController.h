//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSearchBarDelegate.h"

@class IGKVOHandle, IGSearchBar, NSDate, NSString, UIView;

@interface IGSearchController : NSObject <IGSearchBarDelegate>
{
    _Bool _isActive;
    id <IGSearchControllerDelegate> _delegate;
    NSDate *_lastSearch;
    UIView *_searchBarSuperview;
    double _originalSearchBarY;
    double _originalContainingScrollViewY;
    IGSearchBar *_searchBar;
    IGKVOHandle *_contentOffsetObserver;
    struct CGPoint _originalContainingScrollViewContentOffset;
}

+ (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) IGKVOHandle *contentOffsetObserver; // @synthesize contentOffsetObserver=_contentOffsetObserver;
- (void)dealloc;
@property(nonatomic) __weak id <IGSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithSearchBar:(id)arg1;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) NSDate *lastSearch; // @synthesize lastSearch=_lastSearch;
@property(nonatomic) struct CGPoint originalContainingScrollViewContentOffset; // @synthesize originalContainingScrollViewContentOffset=_originalContainingScrollViewContentOffset;
@property(nonatomic) double originalContainingScrollViewY; // @synthesize originalContainingScrollViewY=_originalContainingScrollViewY;
@property(nonatomic) double originalSearchBarY; // @synthesize originalSearchBarY=_originalSearchBarY;
@property(retain, nonatomic) IGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
@property(retain, nonatomic) UIView *searchBarSuperview; // @synthesize searchBarSuperview=_searchBarSuperview;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
