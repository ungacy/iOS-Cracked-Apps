//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

@class XYPHStoreCategoryIndexDetailViewController, XYPHStoreCategoryIndexListViewController, XYPHStoreEntryGoodsComposite;

@interface XYPHStoreCategoryIndexViewController : XYPHBaseViewController
{
    XYPHStoreEntryGoodsComposite *_selectedEntry;
    XYPHStoreCategoryIndexListViewController *_listViewController;
    XYPHStoreCategoryIndexDetailViewController *_detailViewController;
}

@property(retain, nonatomic) XYPHStoreCategoryIndexDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) XYPHStoreCategoryIndexListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(retain, nonatomic) XYPHStoreEntryGoodsComposite *selectedEntry; // @synthesize selectedEntry=_selectedEntry;
- (void).cxx_destruct;
- (void)setup;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
