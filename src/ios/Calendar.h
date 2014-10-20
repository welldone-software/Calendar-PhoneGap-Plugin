#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>
#import <EventKitUI/EventKitUI.h>
#import <EventKit/EventKit.h>

@interface Calendar : CDVPlugin

@property (nonatomic, retain) EKEventStore* eventStore;

- (void)initEventStoreWithCalendarCapabilities;

-(NSArray*)findEKEventsWithTitle: (NSString *)title
                        location: (NSString *)location
                           notes: (NSString *)notes
                       startDate: (NSDate *)startDate
                         endDate: (NSDate *)endDate
                        calendar: (EKCalendar *) calendar;

- (void)createCalendar:(CDVInvokedUrlCommand*)command;
- (void)deleteCalendar:(CDVInvokedUrlCommand*)command;

- (void)createEventWithOptions:(CDVInvokedUrlCommand*)command;
- (void)createEventInteractively:(CDVInvokedUrlCommand*)command;
- (void)createEventInCalendar:(CDVInvokedUrlCommand*)command;

- (void)modifyEvent:(CDVInvokedUrlCommand*)command;
- (void)modifyEventInCalendar:(CDVInvokedUrlCommand*)command;

- (void)findEvent:(CDVInvokedUrlCommand*)command;
- (void)findAllEventsInCalendar:(CDVInvokedUrlCommand*)command;

- (void)listCalendars:(CDVInvokedUrlCommand*)command;

- (void)deleteEvent:(CDVInvokedUrlCommand*)command;
- (void)deleteEventFromCalendar:(CDVInvokedUrlCommand*)command;

@end
