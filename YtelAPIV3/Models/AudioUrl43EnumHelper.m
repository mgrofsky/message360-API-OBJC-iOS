//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#include "AudioUrl43EnumHelper.h"

/**
* Helper class implementation for AudioUrl43Enum to NSString conversion
*/
@implementation AudioUrl43EnumHelper

+(id) stringFromAudioUrl43Enum:(enum AudioUrl43Enum) audioUrl43Enum withDefault: (id) defaultValue
{
    switch(audioUrl43Enum)
    {
        case AudioUrl43Mp3:
            return @"mp3";

        case AudioUrl43Wav:
            return @"wav";

        default:
            return defaultValue;
    }
}

+(NSArray<NSString*>*) stringArrayFromAudioUrl43EnumArray:(NSArray<NSNumber*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSNumber* numberValue in array){
        NSNumber* stringValue = [AudioUrl43EnumHelper stringFromAudioUrl43Enum:(enum AudioUrl43Enum) numberValue.intValue withDefault:[NSNull null]];
        [enums addObject:stringValue];
    }
    return [enums copy];
}

+(enum AudioUrl43Enum) audioUrl43EnumFromString:(NSString*) strValue
{
    NSArray* AudioUrl43EnumArray = [NSArray arrayWithObjects:
                                        @"mp3",
                                        @"wav",
                                        nil];

    return (enum AudioUrl43Enum) [AudioUrl43EnumArray indexOfObject: strValue];
}


+(NSArray<NSNumber*>*) audioUrl43EnumArrayFromStringArray:(NSArray<NSString*>*) array
{
    NSMutableArray* enums = [[NSMutableArray alloc]init]; 
    for(NSString* enumValue in array){
        NSNumber* numberValue = [NSNumber numberWithInt:[ AudioUrl43EnumHelper audioUrl43EnumFromString:enumValue]];
        [enums addObject:numberValue];
    }
    return [enums copy];
}

@end