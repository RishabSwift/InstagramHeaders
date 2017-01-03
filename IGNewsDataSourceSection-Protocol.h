//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UITableView, UITableViewCell;

@protocol IGNewsDataSourceSection <NSObject>
@property(nonatomic) __weak id <IGNewsDataSourceSectionDelegate> delegate;
@property(readonly, nonatomic) unsigned long long *numberOfRows;
- (void)setUpTableView:(UITableView *)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndex:(unsigned long long)arg2;
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndex:(unsigned long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForRowAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *title;
@end
