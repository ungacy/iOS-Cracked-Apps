//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItem.h"

@class NSArray, NSString, QZDrawItemTextWrapper, QzoneCommSparkleWord, UIColor, UIFont, UIImage;

@interface QZDrawItemRichTextLabel : QZDrawItem
{
    _Bool _truncationNotShowMore;
    _Bool _useParagraph;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _numberOfLines;
    double _lineSpace;
    long long _etFontId;
    NSString *_etFontUrl;
    long long _etFontType;
    long long _normalTextOnly;
    QZDrawItemTextWrapper *_textWrapper;
    UIImage *_textWrapperMask;
    NSArray *_colorChangeColorList;
    double _colorChangeDuration;
    QzoneCommSparkleWord *_sparkleword;
}

@property(retain, nonatomic) QzoneCommSparkleWord *sparkleword; // @synthesize sparkleword=_sparkleword;
@property(nonatomic) double colorChangeDuration; // @synthesize colorChangeDuration=_colorChangeDuration;
@property(retain, nonatomic) NSArray *colorChangeColorList; // @synthesize colorChangeColorList=_colorChangeColorList;
@property(readonly, nonatomic) UIImage *textWrapperMask; // @synthesize textWrapperMask=_textWrapperMask;
@property(readonly, nonatomic) QZDrawItemTextWrapper *textWrapper; // @synthesize textWrapper=_textWrapper;
@property(nonatomic) long long normalTextOnly; // @synthesize normalTextOnly=_normalTextOnly;
@property(nonatomic) long long etFontType; // @synthesize etFontType=_etFontType;
@property(retain, nonatomic) NSString *etFontUrl; // @synthesize etFontUrl=_etFontUrl;
@property(nonatomic) long long etFontId; // @synthesize etFontId=_etFontId;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) _Bool useParagraph; // @synthesize useParagraph=_useParagraph;
@property(nonatomic) _Bool truncationNotShowMore; // @synthesize truncationNotShowMore=_truncationNotShowMore;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)sizeToFit:(struct CGSize)arg1;
- (struct CGSize)sizeThatFit:(struct CGSize)arg1;

@end
