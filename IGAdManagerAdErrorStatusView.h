//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGTextWithEntities;

@interface IGAdManagerAdErrorStatusView : UIView
{
    IGTextWithEntities *_errorStatus;
    IGCoreTextView *_errorStatusLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGTextWithEntities *errorStatus; // @synthesize errorStatus=_errorStatus;
@property(retain, nonatomic) IGCoreTextView *errorStatusLabel; // @synthesize errorStatusLabel=_errorStatusLabel;
- (id)initWithFrame:(struct CGRect)arg1 coreTextLinkHandler:(id)arg2;
- (void)layoutSubviews;
- (void)setUpErrorStatusLabelWithLinkHandler:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)styledStringFromTextWithEntities:(id)arg1;

@end

