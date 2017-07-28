//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class ALBBSDKTLogUploadService, NSMutableArray, NSString, UIButton, UICollectionView, UILabel, UITextField, UITextView;

@interface ALBBTradeReportViewController : UIViewController <UITextViewDelegate, UITextFieldDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIViewController *_fromViewController;
    UITextView *_questionTextView;
    UILabel *_placeholderLabel;
    UITextField *_contactTextField;
    UIButton *_submitButton;
    UICollectionView *_collectionView;
    NSMutableArray *_pics;
    ALBBSDKTLogUploadService *_upload;
    struct CGSize _keyboardSize;
}

@property(retain, nonatomic) ALBBSDKTLogUploadService *upload; // @synthesize upload=_upload;
@property(retain, nonatomic) NSMutableArray *pics; // @synthesize pics=_pics;
@property(nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize=_keyboardSize;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UITextField *contactTextField; // @synthesize contactTextField=_contactTextField;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UITextView *questionTextView; // @synthesize questionTextView=_questionTextView;
@property(retain, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void).cxx_destruct;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)submitFeedback;
- (void)handleFeedbackResult:(id)arg1;
- (void)sendFeedback:(id)arg1 fileURLs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadLog;
- (void)sendDiagnoseWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFeedbackIDWithFeedback:(id)arg1 fileURLs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadPicturesWithCompletion:(CDUnknownBlockType)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)resignKeyboard;
- (void)addQuestionImage:(id)arg1;
- (id)deviceString;
- (id)resolution;
- (id)getPlistProperty:(id)arg1;
- (id)netWorkInfo;
- (void)keyboardWasShown:(id)arg1;
- (void)unregisterForKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
