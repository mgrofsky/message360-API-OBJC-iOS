//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#ifndef APIMATIC_PLAYDTMFDIRECTIONENUMHELPER
#define APIMATIC_PLAYDTMFDIRECTIONENUMHELPER

#include "PlayDtmfDirectionEnum.h"

/**
* Helper class interface for PlayDtmfDirectionEnum to NSString conversion
*/
@interface PlayDtmfDirectionEnumHelper : NSObject

+(id) stringFromPlayDtmfDirectionEnum:(enum PlayDtmfDirectionEnum) playDtmfDirectionEnum withDefault: (id) defaultValue;

+(NSArray<NSString*>*) stringArrayFromPlayDtmfDirectionEnumArray:(NSArray<NSNumber*>*) array;


+(enum PlayDtmfDirectionEnum) playDtmfDirectionEnumFromString:(NSString*) strValue;

+(NSArray<NSNumber*>*) playDtmfDirectionEnumArrayFromStringArray:(NSArray<NSString*>*) array;

@end

#endif