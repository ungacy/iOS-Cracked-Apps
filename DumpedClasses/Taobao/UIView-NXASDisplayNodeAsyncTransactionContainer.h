//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NXASDisplayNodeAsyncTransactionContainer.h"

@interface UIView (NXASDisplayNodeAsyncTransactionContainer) <NXASDisplayNodeAsyncTransactionContainer>
- (void)nx_asyncdisplay_asyncTransactionContainerStateDidChange;
- (void)nx_asyncdisplay_cancelAsyncTransactions;
@property(readonly, nonatomic) unsigned long long nx_asyncdisplay_asyncTransactionContainerState;
@property(nonatomic, getter=nx_asyncdisplay_isAsyncTransactionContainer, setter=nx_asyncdisplay_setAsyncTransactionContainer:) _Bool nx_asyncdisplay_asyncTransactionContainer;
@end

