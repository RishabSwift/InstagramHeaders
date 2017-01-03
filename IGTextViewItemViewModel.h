//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"
#import "IGTextViewItemViewModelProtocol.h"

@class IGStyledString, NSString;

@interface IGTextViewItemViewModel : NSObject <IGListDiffable, IGTextViewItemViewModelProtocol>
{
    IGStyledString *_styledString;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)diffIdentifier;
- (id)initWithStyledString:(id)arg1 insets:(struct UIEdgeInsets)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) IGStyledString *styledString; // @synthesize styledString=_styledString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

