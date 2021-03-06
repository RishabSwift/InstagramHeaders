//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"

@class IGCommentReshareRecord, IGUserSession, NSAttributedString, NSString;

@interface IGCommentReshareRecordSectionController : IGListSectionController <IGListSectionType>
{
    IGUserSession *_userSession;
    IGCommentReshareRecord *_record;
    NSAttributedString *_confirmationString;
}

+ (id)blueAttributes;
+ (id)confirmationStringFromUsernames:(id)arg1;
+ (id)greyAttributes;
- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
@property(retain, nonatomic) NSAttributedString *confirmationString; // @synthesize confirmationString=_confirmationString;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (long long)numberOfItems;
@property(readonly, nonatomic) IGCommentReshareRecord *record; // @synthesize record=_record;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

