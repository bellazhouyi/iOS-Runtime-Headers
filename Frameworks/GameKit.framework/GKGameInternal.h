/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSNumber, NSString, NSDictionary;

@interface GKGameInternal : GKInternalRepresentation  {
    unsigned int _numberOfCategories;
    BOOL _installed;
    NSString *_defaultCategory;
    NSString *_name;
    BOOL _supportsAchievements;
    NSNumber *_adamID;
    NSString *_bundleVersion;
    BOOL _hasAggregateLeaderboard;
    BOOL _valid;
    NSString *_bundleIdentifier;
    unsigned int _platform;
    BOOL _supportsMultiplayer;
    NSNumber *_externalVersion;
    NSDictionary *_icons;
    BOOL _supportsLeaderboards;
    unsigned int _numberOfAchievements;
    BOOL _prerendered;
    unsigned int _maxAchievementPoints;
}

@property(retain) NSString * bundleIdentifier;
@property(retain) NSString * bundleVersion;
@property(retain) NSNumber * adamID;
@property(retain) NSNumber * externalVersion;
@property unsigned int platform;
@property(retain) NSString * name;
@property(getter=isPrerendered) BOOL prerendered;
@property BOOL supportsLeaderboards;
@property BOOL hasAggregateLeaderboard;
@property unsigned int numberOfCategories;
@property(retain) NSString * defaultCategory;
@property BOOL supportsAchievements;
@property unsigned int numberOfAchievements;
@property unsigned int maxAchievementPoints;
@property BOOL supportsMultiplayer;
@property(retain) NSDictionary * icons;
@property(getter=isValid) BOOL valid;
@property(getter=isInstalled) BOOL installed;

+ (id)codedPropertyKeys;

- (void)setMaxAchievementPoints:(unsigned int)arg1;
- (void)setPrerendered:(BOOL)arg1;
- (void)setNumberOfAchievements:(unsigned int)arg1;
- (void)setSupportsLeaderboards:(BOOL)arg1;
- (void)setExternalVersion:(id)arg1;
- (void)setSupportsMultiplayer:(BOOL)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setValid:(BOOL)arg1;
- (void)setHasAggregateLeaderboard:(BOOL)arg1;
- (void)setAdamID:(id)arg1;
- (void)setSupportsAchievements:(BOOL)arg1;
- (void)setDefaultCategory:(id)arg1;
- (void)setNumberOfCategories:(unsigned int)arg1;
- (BOOL)isInstalled;
- (BOOL)isPrerendered;
- (unsigned int)maxAchievementPoints;
- (unsigned int)numberOfAchievements;
- (BOOL)hasAggregateLeaderboard;
- (BOOL)supportsMultiplayer;
- (id)serverRepresentation;
- (id)externalVersion;
- (id)bundleVersion;
- (id)adamID;
- (void)setInstalled:(BOOL)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (BOOL)supportsAchievements;
- (BOOL)supportsLeaderboards;
- (unsigned int)platform;
- (id)defaultCategory;
- (id)bundleIdentifier;
- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (unsigned int)numberOfCategories;
- (id)icons;
- (void)setIcons:(id)arg1;
- (BOOL)isValid;

@end