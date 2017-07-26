//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class CTTrain6ChooseModel, CTTrainSalePackageInfoViewModel, CustomerAddressItemModel, NSArray, NSDictionary, NSMutableArray, NSString, PriceType, Train12306OrderModel, Train12306TrainModel, TrainBookingInfoV3Model, TrainSeatInfoV3Model, TrainSeatVendorTypeV3Model, TrainTicketVendorTypeV3Model;

@interface CTTrain6OrderCacheBean : CTCacheBean
{
    _Bool _isSelectInvoice;
    _Bool _isBookable;
    _Bool _isOffsetTicket;
    _Bool _fromMonitorTicketPage;
    _Bool _showVerifyCode;
    _Bool _isStudentTicket;
    int _transferSequence;
    Train12306TrainModel *_trainModel;
    NSMutableArray *_selectPassengerList;
    NSString *_contactPhone;
    CustomerAddressItemModel *_selectInvoiceAddressModel;
    PriceType *_totalPrice;
    NSString *_slogan;
    NSMutableArray *_salePackageList;
    CTTrainSalePackageInfoViewModel *_salePackageSelected;
    NSString *_packagePrompt;
    Train12306OrderModel *_order12306;
    long long _waitPayOrderID;
    NSString *_waitPay12306OrderNo;
    NSString *_waitPayMessage;
    long long _ctripOrderID;
    TrainSeatInfoV3Model *_selectSeatInfoModel;
    TrainBookingInfoV3Model *_selectTrainInfoModel;
    NSMutableArray *_canBuySeatArray;
    NSString *_orderResultMessage;
    NSString *_paymentRequestId;
    NSString *_departDate;
    NSArray *_trainStationList;
    NSString *_phoneCode;
    NSString *_checkCode;
    NSDictionary *_codeInfo;
    NSMutableArray *_trainAppendProductList;
    TrainSeatVendorTypeV3Model *_selectSeatVendorTypeModel;
    TrainTicketVendorTypeV3Model *_selectTicketVendorTypeModel;
    CTTrain6ChooseModel *_chooseModel;
}

@property(retain, nonatomic) CTTrain6ChooseModel *chooseModel; // @synthesize chooseModel=_chooseModel;
@property(nonatomic) _Bool isStudentTicket; // @synthesize isStudentTicket=_isStudentTicket;
@property(nonatomic) int transferSequence; // @synthesize transferSequence=_transferSequence;
@property(retain, nonatomic) TrainTicketVendorTypeV3Model *selectTicketVendorTypeModel; // @synthesize selectTicketVendorTypeModel=_selectTicketVendorTypeModel;
@property(retain, nonatomic) TrainSeatVendorTypeV3Model *selectSeatVendorTypeModel; // @synthesize selectSeatVendorTypeModel=_selectSeatVendorTypeModel;
@property(retain, nonatomic) NSMutableArray *trainAppendProductList; // @synthesize trainAppendProductList=_trainAppendProductList;
@property(retain, nonatomic) NSDictionary *codeInfo; // @synthesize codeInfo=_codeInfo;
@property(nonatomic) _Bool showVerifyCode; // @synthesize showVerifyCode=_showVerifyCode;
@property(copy, nonatomic) NSString *checkCode; // @synthesize checkCode=_checkCode;
@property(retain, nonatomic) NSString *phoneCode; // @synthesize phoneCode=_phoneCode;
@property(nonatomic) _Bool fromMonitorTicketPage; // @synthesize fromMonitorTicketPage=_fromMonitorTicketPage;
@property(nonatomic) _Bool isOffsetTicket; // @synthesize isOffsetTicket=_isOffsetTicket;
@property(retain, nonatomic) NSArray *trainStationList; // @synthesize trainStationList=_trainStationList;
@property(retain, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(copy, nonatomic) NSString *paymentRequestId; // @synthesize paymentRequestId=_paymentRequestId;
@property(copy, nonatomic) NSString *orderResultMessage; // @synthesize orderResultMessage=_orderResultMessage;
@property(retain, nonatomic) NSMutableArray *canBuySeatArray; // @synthesize canBuySeatArray=_canBuySeatArray;
@property(retain, nonatomic) TrainBookingInfoV3Model *selectTrainInfoModel; // @synthesize selectTrainInfoModel=_selectTrainInfoModel;
@property(retain, nonatomic) TrainSeatInfoV3Model *selectSeatInfoModel; // @synthesize selectSeatInfoModel=_selectSeatInfoModel;
@property(nonatomic) long long ctripOrderID; // @synthesize ctripOrderID=_ctripOrderID;
@property(retain, nonatomic) NSString *waitPayMessage; // @synthesize waitPayMessage=_waitPayMessage;
@property(retain, nonatomic) NSString *waitPay12306OrderNo; // @synthesize waitPay12306OrderNo=_waitPay12306OrderNo;
@property(nonatomic) long long waitPayOrderID; // @synthesize waitPayOrderID=_waitPayOrderID;
@property(nonatomic) _Bool isBookable; // @synthesize isBookable=_isBookable;
@property(retain, nonatomic) Train12306OrderModel *order12306; // @synthesize order12306=_order12306;
@property(copy, nonatomic) NSString *packagePrompt; // @synthesize packagePrompt=_packagePrompt;
@property(retain, nonatomic) CTTrainSalePackageInfoViewModel *salePackageSelected; // @synthesize salePackageSelected=_salePackageSelected;
@property(retain, nonatomic) NSMutableArray *salePackageList; // @synthesize salePackageList=_salePackageList;
@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(retain, nonatomic) PriceType *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(retain, nonatomic) CustomerAddressItemModel *selectInvoiceAddressModel; // @synthesize selectInvoiceAddressModel=_selectInvoiceAddressModel;
@property(nonatomic) _Bool isSelectInvoice; // @synthesize isSelectInvoice=_isSelectInvoice;
@property(copy, nonatomic) NSString *contactPhone; // @synthesize contactPhone=_contactPhone;
@property(retain, nonatomic) NSMutableArray *selectPassengerList; // @synthesize selectPassengerList=_selectPassengerList;
@property(retain, nonatomic) Train12306TrainModel *trainModel; // @synthesize trainModel=_trainModel;
- (void).cxx_destruct;
- (id)orderBookingModel;
- (id)valuesForChooseSeatArray;
- (id)showChooseSeatArray;
- (long long)trainAppendTotalPrice;
- (void)handleChildTicketPassportCode;
- (void)sortWithAdultAndChild;
- (id)canBuySeatPickerDataArray;
- (_Bool)hasChild;
- (long long)ticketTypeIDWithName:(id)arg1;
- (id)noPackageViewModel;
- (void)initCache;
- (id)init;

@end
