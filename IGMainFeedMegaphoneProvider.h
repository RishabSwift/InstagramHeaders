//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedMegaphoneProvider.h"

@class IGActivatorMegaphoneDataModel, IGGenericMegaphone, IGRUXDataModel, NSString;

@interface IGMainFeedMegaphoneProvider : NSObject <IGFeedMegaphoneProvider>
{
    IGGenericMegaphone *_favoritesMegaphone;
    IGGenericMegaphone *_serverMegaphone;
    IGActivatorMegaphoneDataModel *_activatorMegaphone;
    IGRUXDataModel *_ruxMegaphone;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGActivatorMegaphoneDataModel *activatorMegaphone; // @synthesize activatorMegaphone=_activatorMegaphone;
- (id)activeActivatorMegaphone;
- (id)activeGenericMegaphones;
- (id)activeRUXMegaphone;
- (unsigned long long)displaySource;
@property(retain, nonatomic) IGGenericMegaphone *favoritesMegaphone; // @synthesize favoritesMegaphone=_favoritesMegaphone;
- (id)init;
@property(retain, nonatomic) IGRUXDataModel *ruxMegaphone; // @synthesize ruxMegaphone=_ruxMegaphone;
@property(retain, nonatomic) IGGenericMegaphone *serverMegaphone; // @synthesize serverMegaphone=_serverMegaphone;
- (void)updateServerMegaphoneWithResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

