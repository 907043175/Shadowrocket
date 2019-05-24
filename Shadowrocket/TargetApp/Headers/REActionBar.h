//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class UISegmentedControl;
@protocol REActionBarDelegate;

@interface REActionBar : UIToolbar
{
    UISegmentedControl *_navigationControl;
    id <REActionBarDelegate> _actionBarDelegate;
}

@property(nonatomic) __weak id <REActionBarDelegate> actionBarDelegate; // @synthesize actionBarDelegate=_actionBarDelegate;
@property(retain, nonatomic) UISegmentedControl *navigationControl; // @synthesize navigationControl=_navigationControl;
- (void).cxx_destruct;
- (void)handleActionBarDone:(id)arg1;
- (void)handleActionBarPreviousNext:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
