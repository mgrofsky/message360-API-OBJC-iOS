//
//  DeleteLetterInput.m
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#import "DeleteLetterInput.h"

@implementation DeleteLetterInput

/**
* The unique identifier for a letter object.
*/
@synthesize lettersid;

/**
* Response Type either json or xml
*/
@synthesize responseType;

-(id)init
{
    if (self = [super init])
    {
        self.responseType = @"json";
    }
    return self;
}

@end