//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSURL;

@interface IGAdRatingFeedObject : NSObject <IGListDiffable>
{
    _Bool _shouldLoadWithCTAQuestions;
    NSURL *_link;
}

- (void).cxx_destruct;
- (id)diffIdentifier;
- (id)initWithLink:(id)arg1 shouldLoadWithCTAQuestions:(_Bool)arg2;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) NSURL *link; // @synthesize link=_link;
@property(nonatomic) _Bool shouldLoadWithCTAQuestions; // @synthesize shouldLoadWithCTAQuestions=_shouldLoadWithCTAQuestions;

@end
