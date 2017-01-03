//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGShareListManager, IGUserSession;

@interface IGShareSocialShareManager : NSObject
{
    _Bool _isCollapsed;
    _Bool _isStickyEnabled;
    long long _shareType;
    IGShareListManager *_shareListManager;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)initWithShareType:(long long)arg1 shareListManager:(id)arg2 userSession:(id)arg3 isStickyEnabled:(_Bool)arg4 isCollapsed:(_Bool)arg5;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
- (_Bool)isSeeMoreCell:(long long)arg1;
@property(readonly, nonatomic) _Bool isStickyEnabled; // @synthesize isStickyEnabled=_isStickyEnabled;
- (unsigned long long)numberOfShareServices;
- (unsigned long long)numberOfVisibleShareServices;
- (id)seeMoreCollectionViewCellWithCollectionViewCell:(id)arg1;
@property(readonly, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
- (id)shareServiceCellWithShareServiceCell:(id)arg1 row:(long long)arg2;
@property(readonly, nonatomic) long long shareType; // @synthesize shareType=_shareType;
- (_Bool)shouldShowSeeMore;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

