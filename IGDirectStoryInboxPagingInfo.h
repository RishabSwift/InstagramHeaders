//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGDirectStoryInboxPagingInfo : NSObject
{
    _Bool _hasMore;
    NSString *_readCursor;
    NSString *_unreadCursor;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (id)initWithReadCursor:(id)arg1 unreadCursor:(id)arg2 hasMore:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSString *readCursor; // @synthesize readCursor=_readCursor;
@property(readonly, copy, nonatomic) NSString *unreadCursor; // @synthesize unreadCursor=_unreadCursor;

@end
