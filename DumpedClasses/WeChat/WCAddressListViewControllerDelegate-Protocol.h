//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCAddressBaseAddress;

@protocol WCAddressListViewControllerDelegate <NSObject>
- (void)AddressImport;
- (void)AddressListDelete:(WCAddressBaseAddress *)arg1;
- (void)AddressListEdit:(WCAddressBaseAddress *)arg1;
- (void)AddressListAdd;
- (void)AddressListComplete:(WCAddressBaseAddress *)arg1;
- (void)AddressListBack;
@end
