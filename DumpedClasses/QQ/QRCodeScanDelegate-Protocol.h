//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QRCodeScanViewController;

@protocol QRCodeScanDelegate <NSObject>
- (void)scanViewControllerDidCancel:(QRCodeScanViewController *)arg1;
- (void)scanViewController:(QRCodeScanViewController *)arg1 failWithReason:(NSString *)arg2;
- (void)scanViewController:(QRCodeScanViewController *)arg1 didScanResult:(NSString *)arg2;
@end

