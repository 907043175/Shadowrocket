//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RETableViewItem.h"

@class REDateTimeItem;

@interface REInlineDatePickerItem : RETableViewItem
{
    REDateTimeItem *_dateTimeItem;
}

+ (id)itemWithDateTimeItem:(id)arg1;
@property(nonatomic) __weak REDateTimeItem *dateTimeItem; // @synthesize dateTimeItem=_dateTimeItem;
- (void).cxx_destruct;
- (id)initWithDateTimeItem:(id)arg1;

@end

