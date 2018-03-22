//
//  VoiceEffectInput.h
//  Ytel
//
//  This file was automatically generated for ytel by APIMATIC v2.0 ( https://apimatic.io )
//
#ifndef APIMATIC_VOICEEFFECTINPUT
#define APIMATIC_VOICEEFFECTINPUT

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"

#import "AudioDirectionEnum.h"
#import "AudioDirectionEnumHelper.h"


//protocol defined for deserialization of JSON
@protocol VoiceEffectInput
@end

@interface VoiceEffectInput : NSObject

/**
* The unique identifier for the in-progress voice call.
*/
@property NSString* callSid;

/**
* Response type format xml or json
*/
@property NSString* responseType;

/**
* The direction the audio effect should be placed on. If IN, the effects will occur on the incoming audio stream. If OUT, the effects will occur on the outgoing audio stream.
*/
@property enum AudioDirectionEnum audioDirection;

/**
* Set the pitch in semitone (half-step) intervals. Value between -14 and 14
*/
@property NSNumber* pitchSemiTones;

/**
* Set the pitch in octave intervals.. Value between -1 and 1
*/
@property NSNumber* pitchOctaves;

/**
* Set the pitch (lowness/highness) of the audio. The higher the value, the higher the pitch. Value greater than 0
*/
@property NSNumber* pitch;

/**
* Set the rate for audio. The lower the value, the lower the rate. value greater than 0
*/
@property NSNumber* rate;

/**
* Set the tempo (speed) of the audio. A higher value denotes a faster tempo. Value greater than 0
*/
@property NSNumber* tempo;

@end
#endif