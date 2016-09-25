/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    int  _ratingRank;
    unsigned int  _stateFlags;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) BOOL isAlwaysAvailable;
@property (nonatomic, readonly) BOOL isBlocked;
@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, readonly) BOOL isPlaceholder;
@property (nonatomic, readonly) BOOL isRemovedSystemApp;
@property (nonatomic, readonly) BOOL isRestricted;
@property (nonatomic, readonly) BOOL isValid;

+ (BOOL)supportsSecureCoding;

- (void)addStateFlag:(unsigned int)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned int)arg2 ratingRank:(int)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAlwaysAvailable;
- (BOOL)isBlocked;
- (BOOL)isInstalled;
- (BOOL)isPlaceholder;
- (BOOL)isRemovedSystemApp;
- (BOOL)isRestricted;
- (BOOL)isValid;

@end