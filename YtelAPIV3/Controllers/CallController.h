//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"
#import "PlayDtmfDirectionEnum.h"
#import "PlayDtmfDirectionEnumHelper.h"
#import "IfMachineEnum.h"
#import "IfMachineEnumHelper.h"
#import "DirectionEnum.h"
#import "DirectionEnumHelper.h"
#import "Direction4Enum.h"
#import "Direction4EnumHelper.h"
#import "FileformatEnum.h"
#import "FileformatEnumHelper.h"
#import "AudioDirectionEnum.h"
#import "AudioDirectionEnumHelper.h"
#import "StatusEnum.h"
#import "StatusEnumHelper.h"
#import "GroupConfirmFileEnum.h"
#import "GroupConfirmFileEnumHelper.h"

@interface CallController : BaseController

/**
* Completion block definition for asynchronous call to View Call1 */
typedef void (^CompletedPostViewCall1)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a single voice call’s information by its CallSid.
* @param    callSid    Required parameter: The unique identifier for the voice call.
*/
- (void) createViewCall1AsyncWithCallSid:(NSString*) callSid
                completionBlock:(CompletedPostViewCall1) onCompleted;

/**
* Completion block definition for asynchronous call to View Call */
typedef void (^CompletedPostViewCall)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a single voice call’s information by its CallSid.
* @param    callsid    Required parameter: The unique identifier for the voice call.
*/
- (void) createViewCallAsyncWithCallsid:(NSString*) callsid
                completionBlock:(CompletedPostViewCall) onCompleted;

/**
* Completion block definition for asynchronous call to Play DTMF */
typedef void (^CompletedPostPlayDTMF)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Play Dtmf and send the Digit
* @param    callSid    Required parameter: The unique identifier of each call resource
* @param    playDtmf    Required parameter: DTMF digits to play to the call. 0-9, #, *, W, or w
* @param    playDtmfDirection    Optional parameter: The leg of the call DTMF digits should be sent to
*/
- (void) createPlayDTMFAsyncWithCallSid:(NSString*) callSid
                playDtmf:(NSString*) playDtmf
                playDtmfDirection:(enum PlayDtmfDirectionEnum) playDtmfDirection
                completionBlock:(CompletedPostPlayDTMF) onCompleted;

/**
* Completion block definition for asynchronous call to Make Call */
typedef void (^CompletedPostMakeCall)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* You can experiment with initiating a call through Ytel and view the request response generated when doing so and get the response in json
* @param    from    Required parameter: A valid Ytel Voice enabled number (E.164 format) that will be initiating the phone call.
* @param    to    Required parameter: To number
* @param    url    Required parameter: URL requested once the call connects
* @param    method    Optional parameter: Specifies the HTTP method used to request the required URL once call connects.
* @param    statusCallBackUrl    Optional parameter: URL that can be requested to receive notification when call has ended. A set of default parameters will be sent here once the call is finished.
* @param    statusCallBackMethod    Optional parameter: Specifies the HTTP methodlinkclass used to request StatusCallbackUrl.
* @param    fallBackUrl    Optional parameter: URL requested if the initial Url parameter fails or encounters an error
* @param    fallBackMethod    Optional parameter: Specifies the HTTP method used to request the required FallbackUrl once call connects.
* @param    heartBeatUrl    Optional parameter: URL that can be requested every 60 seconds during the call to notify of elapsed tim
* @param    heartBeatMethod    Optional parameter: Specifies the HTTP method used to request HeartbeatUrl.
* @param    timeout    Optional parameter: Time (in seconds) Ytel should wait while the call is ringing before canceling the call
* @param    playDtmf    Optional parameter: DTMF Digits to play to the call once it connects. 0-9, #, or *
* @param    hideCallerId    Optional parameter: Specifies if the caller id will be hidden
* @param    record    Optional parameter: Specifies if the call should be recorded
* @param    recordCallBackUrl    Optional parameter: Recording parameters will be sent here upon completion
* @param    recordCallBackMethod    Optional parameter: Method used to request the RecordCallback URL.
* @param    transcribe    Optional parameter: Specifies if the call recording should be transcribed
* @param    transcribeCallBackUrl    Optional parameter: Transcription parameters will be sent here upon completion
* @param    ifMachine    Optional parameter: How Ytel should handle the receiving numbers voicemail machine
* @param    ifMachineUrl    Optional parameter: URL requested when IfMachine=continue
* @param    ifMachineMethod    Optional parameter: Method used to request the IfMachineUrl.
* @param    feedback    Optional parameter: Specify if survey should be enable or not
* @param    surveyId    Optional parameter: The unique identifier for the survey.
*/
- (void) createMakeCallAsyncWithFrom:(NSString*) from
                to:(NSString*) to
                url:(NSString*) url
                method:(NSString*) method
                statusCallBackUrl:(NSString*) statusCallBackUrl
                statusCallBackMethod:(NSString*) statusCallBackMethod
                fallBackUrl:(NSString*) fallBackUrl
                fallBackMethod:(NSString*) fallBackMethod
                heartBeatUrl:(NSString*) heartBeatUrl
                heartBeatMethod:(NSString*) heartBeatMethod
                timeout:(NSNumber*) timeout
                playDtmf:(NSString*) playDtmf
                hideCallerId:(NSNumber*) hideCallerId
                record:(NSNumber*) record
                recordCallBackUrl:(NSString*) recordCallBackUrl
                recordCallBackMethod:(NSString*) recordCallBackMethod
                transcribe:(NSNumber*) transcribe
                transcribeCallBackUrl:(NSString*) transcribeCallBackUrl
                ifMachine:(enum IfMachineEnum) ifMachine
                ifMachineUrl:(NSString*) ifMachineUrl
                ifMachineMethod:(NSString*) ifMachineMethod
                feedback:(NSNumber*) feedback
                surveyId:(NSString*) surveyId
                completionBlock:(CompletedPostMakeCall) onCompleted;

/**
* Completion block definition for asynchronous call to Play Audio */
typedef void (^CompletedPostPlayAudio)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Play Audio from a url
* @param    callSid    Required parameter: The unique identifier of each call resource
* @param    audioUrl    Required parameter: URL to sound that should be played. You also can add more than one audio file using semicolons e.g. http://example.com/audio1.mp3;http://example.com/audio2.wav
* @param    sayText    Required parameter: Valid alphanumeric string that should be played to the In-progress call.
* @param    length    Optional parameter: Time limit in seconds for audio play back
* @param    direction    Optional parameter: The leg of the call audio will be played to
* @param    mix    Optional parameter: If false, all other audio will be muted
*/
- (void) createPlayAudioAsyncWithCallSid:(NSString*) callSid
                audioUrl:(NSString*) audioUrl
                sayText:(NSString*) sayText
                length:(NSNumber*) length
                direction:(enum DirectionEnum) direction
                mix:(NSNumber*) mix
                completionBlock:(CompletedPostPlayAudio) onCompleted;

/**
* Completion block definition for asynchronous call to Record Call */
typedef void (^CompletedPostRecordCall)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Start or stop recording of an in-progress voice call.
* @param    callSid    Required parameter: The unique identifier of each call resource
* @param    record    Required parameter: Set true to initiate recording or false to terminate recording
* @param    direction    Optional parameter: The leg of the call to record
* @param    timeLimit    Optional parameter: Time in seconds the recording duration should not exceed
* @param    callBackUrl    Optional parameter: URL consulted after the recording completes
* @param    fileformat    Optional parameter: Format of the recording file. Can be .mp3 or .wav
*/
- (void) createRecordCallAsyncWithCallSid:(NSString*) callSid
                record:(BOOL) record
                direction:(enum Direction4Enum) direction
                timeLimit:(NSNumber*) timeLimit
                callBackUrl:(NSString*) callBackUrl
                fileformat:(enum FileformatEnum) fileformat
                completionBlock:(CompletedPostRecordCall) onCompleted;

/**
* Completion block definition for asynchronous call to Voice Effect */
typedef void (^CompletedPostVoiceEffect)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Add audio voice effects to the an in-progress voice call.
* @param    callSid    Required parameter: The unique identifier for the in-progress voice call.
* @param    audioDirection    Optional parameter: The direction the audio effect should be placed on. If IN, the effects will occur on the incoming audio stream. If OUT, the effects will occur on the outgoing audio stream.
* @param    pitchSemiTones    Optional parameter: Set the pitch in semitone (half-step) intervals. Value between -14 and 14
* @param    pitchOctaves    Optional parameter: Set the pitch in octave intervals.. Value between -1 and 1
* @param    pitch    Optional parameter: Set the pitch (lowness/highness) of the audio. The higher the value, the higher the pitch. Value greater than 0
* @param    rate    Optional parameter: Set the rate for audio. The lower the value, the lower the rate. value greater than 0
* @param    tempo    Optional parameter: Set the tempo (speed) of the audio. A higher value denotes a faster tempo. Value greater than 0
*/
- (void) createVoiceEffectAsyncWithCallSid:(NSString*) callSid
                audioDirection:(enum AudioDirectionEnum) audioDirection
                pitchSemiTones:(NSNumber*) pitchSemiTones
                pitchOctaves:(NSNumber*) pitchOctaves
                pitch:(NSNumber*) pitch
                rate:(NSNumber*) rate
                tempo:(NSNumber*) tempo
                completionBlock:(CompletedPostVoiceEffect) onCompleted;

/**
* Completion block definition for asynchronous call to Interrupt Call */
typedef void (^CompletedPostInterruptCall)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Interrupt the Call by Call Sid
* @param    callSid    Required parameter: The unique identifier for voice call that is in progress.
* @param    url    Optional parameter: URL the in-progress call will be redirected to
* @param    method    Optional parameter: The method used to request the above Url parameter
* @param    status    Optional parameter: Status to set the in-progress call to
*/
- (void) createInterruptCallAsyncWithCallSid:(NSString*) callSid
                url:(NSString*) url
                method:(NSString*) method
                status:(enum StatusEnum) status
                completionBlock:(CompletedPostInterruptCall) onCompleted;

/**
* Completion block definition for asynchronous call to List Calls */
typedef void (^CompletedPostListCalls)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* A list of calls associated with your Ytel account
* @param    page    Optional parameter: The page count to retrieve from the total results in the collection. Page indexing starts at 1.
* @param    pageSize    Optional parameter: Number of individual resources listed in the response per page
* @param    to    Optional parameter: Filter calls that were sent to this 10-digit number (E.164 format).
* @param    from    Optional parameter: Filter calls that were sent from this 10-digit number (E.164 format).
* @param    dateCreated    Optional parameter: Return calls that are from a specified date.
*/
- (void) createListCallsAsyncWithPage:(NSNumber*) page
                pageSize:(NSNumber*) pageSize
                to:(NSString*) to
                from:(NSString*) from
                dateCreated:(NSString*) dateCreated
                completionBlock:(CompletedPostListCalls) onCompleted;

/**
* Completion block definition for asynchronous call to Send RVM */
typedef void (^CompletedPostSendRVM)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Initiate an outbound Ringless Voicemail through Ytel.
* @param    from    Required parameter: A valid Ytel Voice enabled number (E.164 format) that will be initiating the phone call.
* @param    rVMCallerId    Required parameter: A required secondary Caller ID for RVM to work.
* @param    to    Required parameter: A valid number (E.164 format) that will receive the phone call.
* @param    voiceMailURL    Required parameter: The URL requested once the RVM connects. A set of default parameters will be sent here.
* @param    method    Optional parameter: Specifies the HTTP method used to request the required URL once call connects.
* @param    statusCallBackUrl    Optional parameter: URL that can be requested to receive notification when call has ended. A set of default parameters will be sent here once the call is finished.
* @param    statsCallBackMethod    Optional parameter: Specifies the HTTP method used to request the required StatusCallBackUrl once call connects.
*/
- (void) createSendRVMAsyncWithFrom:(NSString*) from
                rVMCallerId:(NSString*) rVMCallerId
                to:(NSString*) to
                voiceMailURL:(NSString*) voiceMailURL
                method:(NSString*) method
                statusCallBackUrl:(NSString*) statusCallBackUrl
                statsCallBackMethod:(NSString*) statsCallBackMethod
                completionBlock:(CompletedPostSendRVM) onCompleted;

/**
* Completion block definition for asynchronous call to Group Call */
typedef void (^CompletedPostGroupCall)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Group Call
* @param    from    Required parameter: This number to display on Caller ID as calling
* @param    to    Required parameter: Please enter multiple E164 number. You can add max 10 numbers. Add numbers separated with comma. e.g : 1111111111,2222222222
* @param    url    Required parameter: URL requested once the call connects
* @param    groupConfirmKey    Required parameter: Define the DTMF that the called party should send to bridge the call. Allowed Values : 0-9, #, *
* @param    groupConfirmFile    Required parameter: Specify the audio file you want to play when the called party picks up the call
* @param    method    Optional parameter: Specifies the HTTP method used to request the required URL once call connects.
* @param    statusCallBackUrl    Optional parameter: URL that can be requested to receive notification when call has ended. A set of default parameters will be sent here once the call is finished.
* @param    statusCallBackMethod    Optional parameter: Specifies the HTTP methodlinkclass used to request StatusCallbackUrl.
* @param    fallBackUrl    Optional parameter: URL requested if the initial Url parameter fails or encounters an error
* @param    fallBackMethod    Optional parameter: Specifies the HTTP method used to request the required FallbackUrl once call connects.
* @param    heartBeatUrl    Optional parameter: URL that can be requested every 60 seconds during the call to notify of elapsed time and pass other general information.
* @param    heartBeatMethod    Optional parameter: Specifies the HTTP method used to request HeartbeatUrl.
* @param    timeout    Optional parameter: Time (in seconds) we should wait while the call is ringing before canceling the call
* @param    playDtmf    Optional parameter: DTMF Digits to play to the call once it connects. 0-9, #, or *
* @param    hideCallerId    Optional parameter: Specifies if the caller id will be hidden
* @param    record    Optional parameter: Specifies if the call should be recorded
* @param    recordCallBackUrl    Optional parameter: Recording parameters will be sent here upon completion
* @param    recordCallBackMethod    Optional parameter: Method used to request the RecordCallback URL.
* @param    transcribe    Optional parameter: Specifies if the call recording should be transcribed
* @param    transcribeCallBackUrl    Optional parameter: Transcription parameters will be sent here upon completion
*/
- (void) createGroupCallAsyncWithFrom:(NSString*) from
                to:(NSString*) to
                url:(NSString*) url
                groupConfirmKey:(NSString*) groupConfirmKey
                groupConfirmFile:(enum GroupConfirmFileEnum) groupConfirmFile
                method:(NSString*) method
                statusCallBackUrl:(NSString*) statusCallBackUrl
                statusCallBackMethod:(NSString*) statusCallBackMethod
                fallBackUrl:(NSString*) fallBackUrl
                fallBackMethod:(NSString*) fallBackMethod
                heartBeatUrl:(NSString*) heartBeatUrl
                heartBeatMethod:(NSString*) heartBeatMethod
                timeout:(NSNumber*) timeout
                playDtmf:(NSString*) playDtmf
                hideCallerId:(NSString*) hideCallerId
                record:(NSNumber*) record
                recordCallBackUrl:(NSString*) recordCallBackUrl
                recordCallBackMethod:(NSString*) recordCallBackMethod
                transcribe:(NSNumber*) transcribe
                transcribeCallBackUrl:(NSString*) transcribeCallBackUrl
                completionBlock:(CompletedPostGroupCall) onCompleted;

@end