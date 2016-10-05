//
//  Category.h
//  EKEventToiCal
//
//  Created by Dan Willoughby on 6/7/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EventKit/EventKit.h>

@interface EKEvent (Utilities)

-(NSString *)genRandStringLength;

// attendees array should be in the following format:
// @[ @{ @"name" : @"Adam Wulf", @"email" : @"adam@example.com" } ]
-(NSMutableString*)iCalStringWithAttendees:(NSArray<NSDictionary<NSString*,NSString*>*>*)attendees;

@end
