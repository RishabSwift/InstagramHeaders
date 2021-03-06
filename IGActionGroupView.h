//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"

@class NSArray, NSString, UITableView;

@interface IGActionGroupView : UIView <UITableViewDataSource>
{
    UIView *_headerView;
    NSArray *_actions;
    UIView *_headerBackgroundView;
    UIView *_backgroundView;
    UITableView *_actionsTableView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) UITableView *actionsTableView; // @synthesize actionsTableView=_actionsTableView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)flashScrollIndicatorsIfNeeded;
@property(readonly, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

