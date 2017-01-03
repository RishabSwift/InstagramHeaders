//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray, NSString;

@interface IGHScrollAYMFModel : NSObject <IGListDiffable>
{
    NSArray *_items;
    NSString *_title;
    NSString *_actionText;
    NSString *_uuid;
    long long _fbUpsellPosition;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
- (id)diffIdentifier;
@property(readonly, nonatomic) long long fbUpsellPosition; // @synthesize fbUpsellPosition=_fbUpsellPosition;
- (id)initWithTitle:(id)arg1 items:(id)arg2 upsellPosition:(unsigned long long)arg3 actionText:(id)arg4 uuID:(id)arg5;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

@end

