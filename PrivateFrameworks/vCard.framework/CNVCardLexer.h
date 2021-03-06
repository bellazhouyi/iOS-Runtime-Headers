/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardLexer : NSObject {
    NSArray * _activeTokenSets;
    char * _bytes;
    unsigned int  _cursor;
    NSMutableData * _data;
    int  _errorCount;
    unsigned int  _length;
    unsigned int  _peekedPoint;
    BOOL  _unicode;
}

- (void).cxx_destruct;
- (void)_applyNextStringInEncoding:(unsigned int)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 intoString:(id)arg5;
- (BOOL)advancePastEOL;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advanceToEOL;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOLUnicode;
- (void)advanceToPeekPoint;
- (int)advanceToSingleByteString;
- (int)advanceToString;
- (BOOL)advanceToToken:(int)arg1 throughTypes:(int)arg2;
- (int)advanceToUnicodeString;
- (BOOL)advancedPastToken:(int)arg1;
- (void)appendDataInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toData:(id)arg2;
- (void)appendNextEscapedCharacterToData:(id)arg1;
- (void)appendNextQuotedPrintableDataToData:(id)arg1;
- (BOOL)atEOF;
- (unsigned short)charAtPosition:(unsigned int)arg1 withOffset:(int)arg2;
- (unsigned int)cursor;
- (struct _NSRange { unsigned int x1; unsigned int x2; })emptyRangeStartingAtCursor;
- (int)errorCount;
- (struct _NSRange { unsigned int x1; unsigned int x2; })expandRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 untilNextByteIs:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned int)arg3;
- (id)nextBase64Data;
- (id)nextBase64Line:(BOOL*)arg1;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (id)nextQuotedStringValueInEncoding:(unsigned int)arg1;
- (id)nextSingleByteBase64Line:(BOOL*)arg1;
- (id)nextSingleByteStringInEncoding:(unsigned int)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (id)nextStringInEncoding:(unsigned int)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (int)nextTokenPeek:(BOOL)arg1;
- (int)nextTokenPeek:(BOOL)arg1 length:(int)arg2;
- (int)nextTokenPeekSingle:(BOOL)arg1 length:(int)arg2;
- (int)nextTokenPeekUnicode:(BOOL)arg1 length:(int)arg2;
- (id)nextUnicodeBase64Line:(BOOL*)arg1;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3;
- (int)peekAtNextToken;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeWithLength:(unsigned int)arg1 lTrim:(unsigned int)arg2 rTrim:(unsigned int)arg3;
- (int)readNextToken;
- (id)stringFromData:(id)arg1 encoding:(unsigned int)arg2 prefixLength:(unsigned int)arg3 suffixLength:(unsigned int)arg4;
- (id)stringFromSubData:(id)arg1 encoding:(unsigned int)arg2;
- (id)stringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 encoding:(unsigned int)arg2;
- (int)tokenAtCursonIgnoringLineFolding;
- (int)tokenAtCursor;
- (id)tokenSetForLength:(int)arg1;
- (id)trimData:(id)arg1 withPrefixLength:(unsigned int)arg2 suffixLength:(unsigned int)arg3;

@end
