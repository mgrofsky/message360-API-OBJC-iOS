//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#include "GroupConfirmFile44EnumHelper.h"

/**
* Helper class implementation for GroupConfirmFile44Enum to NSString conversion
*/
@implementation GroupConfirmFile44EnumHelper

+(id) stringFromGroupConfirmFile44Enum:(enum GroupConfirmFile44Enum) groupConfirmFile44Enum withDefault: (id) defaultValue
{
    switch(groupConfirmFile44Enum)
    {
        case GroupConfirmFile44Mp3:
            return @"mp3";

        case GroupConfirmFile44Wav:
            return @"wav";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromGroupConfirmFile44EnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [GroupConfirmFile44EnumHelper stringFromGroupConfirmFile44Enum:(enum GroupConfirmFile44Enum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum GroupConfirmFile44Enum) groupConfirmFile44EnumFromString:(NSString*) strValue
{
    NSArray* GroupConfirmFile44EnumArray = [NSArray arrayWithObjects:
                                        @"mp3",
                                        @"wav",
                                        nil];

    return (enum GroupConfirmFile44Enum) [GroupConfirmFile44EnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) groupConfirmFile44EnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ GroupConfirmFile44EnumHelper groupConfirmFile44EnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end