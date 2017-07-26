//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTBirthdayPickerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CTCustomeGroupTableViewCell, CTGlobalMemoryCache, CTMyCtripUserInfoViewController, CTSegmentControl, CTTableView, NSString, UIBarButtonItem, UIButton, UIDatePicker, UIImageView, UILabel, UIPickerView, UITextField, UIToolbar, UIView;

@interface CTMyCtripEditUserInfoViewController : CTRootViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UIAlertViewDelegate, CTBirthdayPickerDelegate>
{
    NSString *strMessage;
    NSString *strName;
    NSString *strSex;
    NSString *strBirth;
    NSString *strBirthSelect;
    NSString *strEmail;
    NSString *strMobile;
    UIView *sexView;
    UIBarButtonItem *saveBtn;
    CTGlobalMemoryCache *cacheBean_;
    UIPickerView *sexPicker;
    long long intPicker;
    long long intIphone5;
    struct CGPoint tableOffset;
    long long keyboardHeight;
    long long yOffsetLower;
    long long keyboardAnimatedCount;
    _Bool isDraggingResign;
    NSString *strNameOld;
    int sexOld;
    NSString *strBirthOld;
    NSString *strEmailOld;
    NSString *strMobileOld;
    int genderInt;
    CTCustomeGroupTableViewCell *nemeCell_;
    CTCustomeGroupTableViewCell *sexCell_;
    CTCustomeGroupTableViewCell *birthCell_;
    CTTableView *editUserInfoTableView_;
    UITextField *nameTextField_;
    UILabel *birthLabel_;
    NSString *nameStr;
    NSString *birthStr;
    CTMyCtripUserInfoViewController *mParentVC;
    CTCustomeGroupTableViewCell *_mobileCell_;
    CTCustomeGroupTableViewCell *_emailCell_;
    UITextField *_birthTextField_;
    UITextField *_mobileTextField_;
    UILabel *_noBindedPhoneLbl;
    UIImageView *_noBindedPhoneArrow;
    UITextField *_emailTextField_;
    CTSegmentControl *_genderSel;
    UIToolbar *_genderToolBar_;
    UIDatePicker *_birthPickerView_;
    UIToolbar *_birthToolBar_;
    UILabel *_sexLabel_;
    UILabel *_nameContentLbl_;
    UILabel *_sexContentLbl_;
    UILabel *_mobilContentLbl_;
    UILabel *_emailContentLbl_;
    NSString *_emailStr;
    NSString *_mobilStr;
    UIButton *_saveButton;
    UIView *_footView;
    UILabel *_dateLabel;
    UILabel *_bindLbl;
}

+ (_Bool)isEmojiString:(id)arg1;
+ (_Bool)stringContainsEmoji:(id)arg1;
@property(nonatomic) __weak UILabel *bindLbl; // @synthesize bindLbl=_bindLbl;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(nonatomic) __weak UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) NSString *mobilStr; // @synthesize mobilStr=_mobilStr;
@property(retain, nonatomic) NSString *emailStr; // @synthesize emailStr=_emailStr;
@property(retain, nonatomic) UILabel *emailContentLbl_; // @synthesize emailContentLbl_=_emailContentLbl_;
@property(retain, nonatomic) UILabel *mobilContentLbl_; // @synthesize mobilContentLbl_=_mobilContentLbl_;
@property(retain, nonatomic) UILabel *sexContentLbl_; // @synthesize sexContentLbl_=_sexContentLbl_;
@property(retain, nonatomic) UILabel *nameContentLbl_; // @synthesize nameContentLbl_=_nameContentLbl_;
@property(retain, nonatomic) UILabel *sexLabel_; // @synthesize sexLabel_=_sexLabel_;
@property(retain, nonatomic) UIToolbar *birthToolBar_; // @synthesize birthToolBar_=_birthToolBar_;
@property(retain, nonatomic) UIDatePicker *birthPickerView_; // @synthesize birthPickerView_=_birthPickerView_;
@property(retain, nonatomic) UIToolbar *genderToolBar_; // @synthesize genderToolBar_=_genderToolBar_;
@property(retain, nonatomic) CTSegmentControl *genderSel; // @synthesize genderSel=_genderSel;
@property(retain, nonatomic) UITextField *emailTextField_; // @synthesize emailTextField_=_emailTextField_;
@property(nonatomic) __weak UIImageView *noBindedPhoneArrow; // @synthesize noBindedPhoneArrow=_noBindedPhoneArrow;
@property(nonatomic) __weak UILabel *noBindedPhoneLbl; // @synthesize noBindedPhoneLbl=_noBindedPhoneLbl;
@property(retain, nonatomic) UITextField *mobileTextField_; // @synthesize mobileTextField_=_mobileTextField_;
@property(retain, nonatomic) UITextField *birthTextField_; // @synthesize birthTextField_=_birthTextField_;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *emailCell_; // @synthesize emailCell_=_emailCell_;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *mobileCell_; // @synthesize mobileCell_=_mobileCell_;
@property(retain, nonatomic) CTMyCtripUserInfoViewController *mParentVC; // @synthesize mParentVC;
@property(nonatomic) int genderInt; // @synthesize genderInt;
@property(retain, nonatomic) NSString *birthStr; // @synthesize birthStr;
@property(retain, nonatomic) NSString *nameStr; // @synthesize nameStr;
@property(retain, nonatomic) UILabel *birthLabel_; // @synthesize birthLabel_;
@property(retain, nonatomic) UITextField *nameTextField_; // @synthesize nameTextField_;
@property(retain, nonatomic) CTTableView *editUserInfoTableView_; // @synthesize editUserInfoTableView_;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *birthCell_; // @synthesize birthCell_;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *sexCell_; // @synthesize sexCell_;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *nemeCell_; // @synthesize nemeCell_;
- (void).cxx_destruct;
- (void)genderSwithChanged:(id)arg1;
- (void)birthdayPickerConfirmWithDate:(id)arg1 birthdayPicker:(id)arg2;
- (void)birthdayPickerCancel:(id)arg1;
- (unsigned long long)unicodeLengthOfString:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)pressSaveBtn:(id)arg1;
- (void)closeKeyBoard;
- (void)dismiss:(id)arg1;
- (void)configBirthLabel:(id)arg1;
- (void)clickBirthday;
- (void)saveClicked;
- (_Bool)checkValue;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setTableViewContentOffset;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewsFitToIphone5;
- (void)backBarButtonClicked:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)initData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
