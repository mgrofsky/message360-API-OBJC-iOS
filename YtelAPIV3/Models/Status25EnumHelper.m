//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#include "Status25EnumHelper.h"

/**
* Helper class implementation for Status25Enum to NSString conversion
*/
@implementation Status25EnumHelper

+(id) stringFromStatus25Enum:(enum Status25Enum) status25Enum withDefault: (id) defaultValue
{
    switch(status25Enum)
    {
        case Status25INPROGRESS:
            return @"inprogress";

        case Status25Success:
            return @"success";

        case Status25Failure:
            return @"failure";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromStatus25EnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [Status25EnumHelper stringFromStatus25Enum:(enum Status25Enum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum Status25Enum) status25EnumFromString:(NSString*) strValue
{
    NSArray* Status25EnumArray = [NSArray arrayWithObjects:
                                        @"inprogress",
                                        @"success",
                                        @"failure",
                                        nil];

    return (enum Status25Enum) [Status25EnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) status25EnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ Status25EnumHelper status25EnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end