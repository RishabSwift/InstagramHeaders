//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface IGItemDiffing : NSObject
{
    NSSet *_currentItems;
    id <IGItemDiffingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *currentItems; // @synthesize currentItems=_currentItems;
@property(readonly, nonatomic) __weak id <IGItemDiffingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;
- (void)updateCurrentItemWithSet:(id)arg1;

@end

