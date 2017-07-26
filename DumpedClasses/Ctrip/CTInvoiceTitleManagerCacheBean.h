//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class CustomerInvoiceSearchRequest, NSMutableArray, NSString;

@interface CTInvoiceTitleManagerCacheBean : CTCacheBean
{
    _Bool _isExecuteSuccess;
    int _recordCount;
    CustomerInvoiceSearchRequest *_lastRequest;
    CustomerInvoiceSearchRequest *_lastSuccessRequest;
    NSMutableArray *_invoiceTitleList;
    NSString *_result;
}

+ (unsigned long long)unicodeLengthOfString:(id)arg1;
+ (_Bool)checkTaxPayNumValidity:(id)arg1;
+ (_Bool)checkInvoiceTitleValidity:(id)arg1;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
@property(nonatomic) _Bool isExecuteSuccess; // @synthesize isExecuteSuccess=_isExecuteSuccess;
@property(retain, nonatomic) NSMutableArray *invoiceTitleList; // @synthesize invoiceTitleList=_invoiceTitleList;
@property(nonatomic) int recordCount; // @synthesize recordCount=_recordCount;
@property(copy, nonatomic) CustomerInvoiceSearchRequest *lastSuccessRequest; // @synthesize lastSuccessRequest=_lastSuccessRequest;
@property(copy, nonatomic) CustomerInvoiceSearchRequest *lastRequest; // @synthesize lastRequest=_lastRequest;
- (void).cxx_destruct;
- (void)deleteInvoiceTitleFromList:(long long)arg1;
- (void)sortInvoiceTitleList:(long long)arg1 invoiceModel:(id)arg2;
- (void)initCache;

@end
