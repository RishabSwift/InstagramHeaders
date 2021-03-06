//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerPreviewingDelegate.h"

@class IGFeedItem, IGUserSession, NSIndexPath, NSString;

@interface IGFeedItemPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate>
{
    IGUserSession *_userSession;
    id _controller;
    IGFeedItem *_item;
    NSIndexPath *_itemIndexPath;
    unsigned long long _mediaIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id controller; // @synthesize controller=_controller;
- (id)initWithUserSession:(id)arg1 controller:(id)arg2;
@property(retain, nonatomic) IGFeedItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSIndexPath *itemIndexPath; // @synthesize itemIndexPath=_itemIndexPath;
@property(nonatomic) unsigned long long mediaIndex; // @synthesize mediaIndex=_mediaIndex;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

