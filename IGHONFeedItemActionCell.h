//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGFeedItemActionCellConfigurable.h"

@class IGFeedItem, IGPageCellPageControl, NSString, UIButton;

@interface IGHONFeedItemActionCell : UICollectionViewCell <IGFeedItemActionCellConfigurable>
{
    _Bool _sponsoredPostAllowed;
    _Bool _showSaveButton;
    _Bool _showShareButton;
    _Bool _pageControlHidden;
    IGFeedItem *_feedItem;
    long long _accessoryViewType;
    id <IGFeedItemActionCellConfigurableDelegate> _delegate;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    UIButton *_customizableButton;
    IGPageCellPageControl *_pageControl;
}

- (void).cxx_destruct;
@property(nonatomic) long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(retain, nonatomic) UIButton *customizableButton; // @synthesize customizableButton=_customizableButton;
- (void)customizableButtonTapped:(id)arg1;
@property(nonatomic) __weak id <IGFeedItemActionCellConfigurableDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(retain, nonatomic) IGPageCellPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) long long pageControlCurrentPage;
- (void)pageControlDidChangeValue:(id)arg1;
@property(nonatomic) _Bool pageControlHidden; // @synthesize pageControlHidden=_pageControlHidden;
- (void)setCurrentPageForCarouselIndicator:(unsigned long long)arg1;
- (void)setCustomizableButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCustomizableButtonPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2;
- (void)setNumberOfPagesForCarouselIndicator:(unsigned long long)arg1;
@property(nonatomic) _Bool showSaveButton; // @synthesize showSaveButton=_showSaveButton;
@property(nonatomic) _Bool showShareButton; // @synthesize showShareButton=_showShareButton;
@property(nonatomic) _Bool sponsoredPostAllowed; // @synthesize sponsoredPostAllowed=_sponsoredPostAllowed;
- (void)setupCustomizableButton;
- (void)setupPageControl;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateCustomizableButtonToCTAState:(long long)arg1 withIntent:(id)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

