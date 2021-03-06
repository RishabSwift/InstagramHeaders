//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPTLayer, CPTNumericData, CPTPlot, NSArray;

@protocol CPTPlotDataSource <NSObject>
- (unsigned long long)numberOfRecordsForPlot:(CPTPlot *)arg1;

@optional
- (CPTNumericData *)dataForPlot:(CPTPlot *)arg1 field:(unsigned long long)arg2 recordIndexRange:(struct _NSRange)arg3;
- (CPTNumericData *)dataForPlot:(CPTPlot *)arg1 recordIndexRange:(struct _NSRange)arg2;
- (CPTLayer *)dataLabelForPlot:(CPTPlot *)arg1 recordIndex:(unsigned long long)arg2;
- (NSArray *)dataLabelsForPlot:(CPTPlot *)arg1 recordIndexRange:(struct _NSRange)arg2;
- (double)doubleForPlot:(CPTPlot *)arg1 field:(unsigned long long)arg2 recordIndex:(unsigned long long)arg3;
- (double *)doublesForPlot:(CPTPlot *)arg1 field:(unsigned long long)arg2 recordIndexRange:(struct _NSRange)arg3;
- (id)numberForPlot:(CPTPlot *)arg1 field:(unsigned long long)arg2 recordIndex:(unsigned long long)arg3;
- (NSArray *)numbersForPlot:(CPTPlot *)arg1 field:(unsigned long long)arg2 recordIndexRange:(struct _NSRange)arg3;
@end

