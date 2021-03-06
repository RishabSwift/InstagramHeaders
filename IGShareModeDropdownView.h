//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface IGShareModeDropdownView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    id <IGShareModeDropdownViewDataSource> _dataSource;
    id <IGShareModeDropdownViewDelegate> _delegate;
    long long _selectedIndex;
    UITableView *_tableView;
}

+ (double)heightForItemCount:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShareModeDropdownViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGShareModeDropdownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 selectedIndex:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

