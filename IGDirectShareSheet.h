//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGDirectGrowingMessageTextViewDelegate.h"
#import "IGDirectRecipientDataSourceDelegate.h"
#import "IGSwipeDismissManagerDelegate.h"
#import "IGViewControllerSlideable.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UITextFieldDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGDirectGrowingMessageTextView, IGDirectShareRecipient, IGSwipeDismissManager, IGUserSession, NSArray, NSString, UIButton, UICollectionView, UILabel, UITextField, UITextView, UIView;

@interface IGDirectShareSheet : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UITextFieldDelegate, IGDirectRecipientDataSourceDelegate, UIViewControllerTransitioningDelegate, IGDirectGrowingMessageTextViewDelegate, IGViewControllerSlideable, IGSwipeDismissManagerDelegate>
{
    _Bool _loadingResults;
    id <IGDirectMessageProducer> _model;
    id <IGDirectShareSheetDelegate> _delegate;
    IGUserSession *_userSession;
    UIViewController *_sourceController;
    NSArray *_allSections;
    NSArray *_defaultRecipients;
    NSArray *_searchResults;
    IGDirectShareRecipient *_selectedRecipient;
    UIView *_overlayView;
    UIView *_contentContainerView;
    UICollectionView *_collectionView;
    UIButton *_bottomButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    unsigned long long _shareState;
    UIButton *_searchButton;
    UITextField *_searchBar;
    UIView *_topLine;
    IGDirectGrowingMessageTextView *_messageView;
    UIButton *_searchBarClearButton;
    UITextView *_warningLabel;
    UIView *_warningLine;
    id <IGDirectRecipientDataSourceProtocol> _dataSource;
    IGSwipeDismissManager *_swipeDismissManager;
    struct CGRect _keyboardFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allSections; // @synthesize allSections=_allSections;
- (id)analyticsModule;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
- (double)bottomOfFrame;
- (void)bumpNewRecipientToFront:(id)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (id)currentText;
@property(retain, nonatomic) id <IGDirectRecipientDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidReturnLocalResults:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSArray *defaultRecipients; // @synthesize defaultRecipients=_defaultRecipients;
@property(nonatomic) __weak id <IGDirectShareSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleNewQueryString:(id)arg1;
- (id)initWithModel:(id)arg1 userSession:(id)arg2;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutViewsFirstTime;
@property(nonatomic) _Bool loadingResults; // @synthesize loadingResults=_loadingResults;
- (void)logCurrentImpressionEventsForSearchWithQuery:(id)arg1 forSelectedItem:(id)arg2 withSelectedUserIDs:(id)arg3 atIndexPath:(id)arg4;
- (void)logSelectionEventForRecipient:(id)arg1 atIndexPath:(id)arg2;
- (id)loggingDictionaryForRecipient:(id)arg1;
@property(retain, nonatomic) IGDirectGrowingMessageTextView *messageView; // @synthesize messageView=_messageView;
- (void)messageView:(id)arg1 didUpdateToHeight:(double)arg2;
- (void)messageViewClearButtonTappedWhileNoText:(id)arg1;
@property(readonly, nonatomic) id <IGDirectMessageProducer> model; // @synthesize model=_model;
- (id)module;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onBottomButtonTapped;
- (void)onOverlayTapped;
- (void)onSearchButtonTapped;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
@property(retain, nonatomic) UITextField *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIButton *searchBarClearButton; // @synthesize searchBarClearButton=_searchBarClearButton;
- (void)searchBarClearButtonTapped;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (long long)sectionForType:(long long)arg1;
@property(retain, nonatomic) IGDirectShareRecipient *selectedRecipient; // @synthesize selectedRecipient=_selectedRecipient;
- (void)send;
- (id)sendToTitleString;
- (void)setSearchBarClearButtonAlpha:(double)arg1;
@property(nonatomic) unsigned long long shareState; // @synthesize shareState=_shareState;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) IGSwipeDismissManager *swipeDismissManager; // @synthesize swipeDismissManager=_swipeDismissManager;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UITextView *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) UIView *warningLine; // @synthesize warningLine=_warningLine;
- (id)shareRecipientAtIndexPath:(id)arg1;
@property(readonly, nonatomic) UIViewController *sourceController; // @synthesize sourceController=_sourceController;
- (id)subtitleStringForCurrentRecipients;
- (void)swipeDismissManager:(id)arg1 didDismissViewController:(id)arg2;
- (void)swipeDismissManager:(id)arg1 willDismissViewController:(id)arg2;
- (void)textFieldChanged:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (long long)typeOfSection:(long long)arg1;
- (void)updateAllSections;
- (void)updateBottomButton;
- (void)updateMessageViewToHeight:(double)arg1 toVisible:(_Bool)arg2 animated:(_Bool)arg3;
- (void)updateMessageViewToVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateTitleStrings;
- (void)updateViewsFromShareState:(unsigned long long)arg1 toShareState:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewModelForRecipient:(id)arg1;
- (id)warningMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

