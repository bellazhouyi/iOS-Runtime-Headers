/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSDate, NSString;

@interface AFBulletin : NSObject <NSSecureCoding> {
    NSString *_bulletinID;
    NSDate *_date;
    NSString *_displayName;
    NSDate *_endDate;
    NSString *_message;
    NSString *_modalAlertContentMessage;
    NSDate *_recencyDate;
    NSString *_sectionID;
    NSString *_subtitle;
    NSString *_timeZone;
    NSString *_title;
    bool_allDay;
    bool_read;
}

@property(getter=isAllDay,readonly) bool allDay;
@property(copy,readonly) NSString * bulletinID;
@property(copy,readonly) NSDate * date;
@property(copy) NSString * displayName;
@property(copy,readonly) NSDate * endDate;
@property(copy,readonly) NSString * message;
@property(copy,readonly) NSString * modalAlertContentMessage;
@property(getter=isRead) bool read;
@property(copy,readonly) NSDate * recencyDate;
@property(copy,readonly) NSString * sectionID;
@property(copy,readonly) NSString * subtitle;
@property(copy,readonly) NSString * timeZone;
@property(copy,readonly) NSString * title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bulletinID;
- (id)date;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (bool)isAllDay;
- (bool)isRead;
- (id)message;
- (id)modalAlertContentMessage;
- (id)recencyDate;
- (id)sectionID;
- (void)setBulletin:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setRead:(bool)arg1;
- (id)subtitle;
- (id)timeZone;
- (id)title;

@end