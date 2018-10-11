//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#ifndef APIMATIC_FILEFORMAT37ENUMHELPER
#define APIMATIC_FILEFORMAT37ENUMHELPER

#include "Fileformat37Enum.h"

/**
* Helper class interface for Fileformat37Enum to NSString conversion
*/
@interface Fileformat37EnumHelper : NSObject

+(id) stringFromFileformat37Enum:(enum Fileformat37Enum) fileformat37Enum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromFileformat37EnumArray:(NSArray<NSNumber*>*) array;


+(enum Fileformat37Enum) fileformat37EnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) fileformat37EnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif