/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSArray;



@interface CoreDAVPropFindTask : CoreDAVTask 
{
    NSArray *_propFindElements;
}


- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithPropertiesToFind:(id)arg1 atRelativeURI:(id)arg2 withDepth:(NSInteger)arg3;
- (BOOL)processData:(id)arg1 withParser:(id)arg2;
- (void)dealloc;
- (id)httpMethod;
- (id)requestBody;

@end