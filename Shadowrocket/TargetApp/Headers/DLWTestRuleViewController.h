//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DLWViewController.h"

@class DLWRuleMatcher, NSObject, NSString, RETextItem, UIActivityIndicatorView;
@protocol OS_dispatch_source;

@interface DLWTestRuleViewController : DLWViewController
{
    NSString *_name;
    RETextItem *_hostTextItem;
    DLWRuleMatcher *_ruleMatcher;
    NSObject<OS_dispatch_source> *_timer;
    UIActivityIndicatorView *_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) DLWRuleMatcher *ruleMatcher; // @synthesize ruleMatcher=_ruleMatcher;
@property(retain, nonatomic) RETextItem *hostTextItem; // @synthesize hostTextItem=_hostTextItem;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)testHostRuleWithValue:(id)arg1;
- (void)testHostRule;
- (void)setupTableViewManager;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end
