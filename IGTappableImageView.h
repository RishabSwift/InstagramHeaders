//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageView.h"

@class IGSimpleButton, NSString;

@interface IGTappableImageView : IGImageView
{
    NSString *_mediaID;
    IGSimpleButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSimpleButton *button; // @synthesize button=_button;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
- (void)onButtonTapped:(id)arg1;

@end

