//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class IGUserSession, NSMutableOrderedSet, NSMutableSet, NSString, UIButton, UICollectionView, UIView;

@interface IGDraftBrowserViewController : IGViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isEditing;
    id <IGDraftBrowserViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    NSMutableOrderedSet *_drafts;
    NSMutableSet *_selectedDrafts;
    UIView *_bottomBar;
    UIButton *_discardButton;
}

- (void).cxx_destruct;
- (id)analyticsModule;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak id <IGDraftBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteConfirmed;
- (void)deleteSelectedButtonTapped;
@property(retain, nonatomic) UIButton *discardButton; // @synthesize discardButton=_discardButton;
- (void)dismissButtonTapped;
- (void)doneButtonTapped;
@property(retain, nonatomic) NSMutableOrderedSet *drafts; // @synthesize drafts=_drafts;
- (void)editButtonTapped;
- (id)initWithUserSession:(id)arg1;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
- (void)loadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)prefersStatusBarHidden;
@property(retain, nonatomic) NSMutableSet *selectedDrafts; // @synthesize selectedDrafts=_selectedDrafts;
- (void)updateDeleteSelectedButton;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

