//
//  ListCallsInput.m
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#import "ListCallsInput.h"

@implementation ListCallsInput

/**
* Response type format xml or json
*/
@synthesize responseType;

/**
* The page count to retrieve from the total results in the collection. Page indexing starts at 1.
*/
@synthesize page;

/**
* Number of individual resources listed in the response per page
*/
@synthesize pageSize;

/**
* Filter calls that were sent to this 10-digit number (E.164 format).
*/
@synthesize to;

/**
* Filter calls that were sent from this 10-digit number (E.164 format).
*/
@synthesize from;

/**
* Return calls that are from a specified date.
*/
@synthesize dateCreated;

-(id)init
{
    if (self = [super init])
    {
        self.responseType = @"json";
        self.page = 1;
        self.pageSize = 10;
    }
    return self;
}

@end