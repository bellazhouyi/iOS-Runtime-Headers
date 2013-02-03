/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext {
    BOOL _extractLinks;
    NSMutableString *_plainString;
}

@property(readonly) NSString *plainString;

- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 extractLinks:(BOOL)arg2;
- (id)initWithAttributedString:(id)arg1;
- (id)name;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3 characters:(id)arg4;
- (id)plainString;
- (id)resultsForLogging;

@end