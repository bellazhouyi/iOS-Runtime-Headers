/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIEventActionHandler : NSObject {
    NSDictionary * _serializedEventSnapshot;
}

@property (nonatomic, retain) NSDictionary *serializedEventSnapshot;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned int)_actionWithName:(id)arg1;
- (void)_recordSignalWithAction:(unsigned int)arg1 onEvent:(id)arg2;
- (void)_shouldRecordSignalWithCompletion:(id /* block */)arg1;
- (void)handleAction:(id)arg1;
- (id)serializedEventSnapshot;
- (void)setEventBeingEdited:(id)arg1;
- (void)setSerializedEventSnapshot:(id)arg1;
- (void)unsetEventBeingEdited:(id)arg1;

@end
