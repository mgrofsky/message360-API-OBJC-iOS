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
#import "Status12Enum.h"
#import "Status12EnumHelper.h"

@interface TranscriptionController : BaseController

/**
* Completion block definition for asynchronous call to Transcribe Audio URL */
typedef void (^CompletedPostTranscribeAudioURL)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Transcribe an audio recording from a file.
* @param    audiourl    Required parameter: URL pointing to the location of the audio file that is to be transcribed.
*/
- (void) createTranscribeAudioURLAsyncWithAudiourl:(NSString*) audiourl
                completionBlock:(CompletedPostTranscribeAudioURL) onCompleted;

/**
* Completion block definition for asynchronous call to Transcribe Recording */
typedef void (^CompletedPostTranscribeRecording)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Transcribe a recording by its RecordingSid.
* @param    recordingSid    Required parameter: The unique identifier for a recording object.
*/
- (void) createTranscribeRecordingAsyncWithRecordingSid:(NSString*) recordingSid
                completionBlock:(CompletedPostTranscribeRecording) onCompleted;

/**
* Completion block definition for asynchronous call to View Transcription */
typedef void (^CompletedPostViewTranscription)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve information about a transaction by its TranscriptionSid.
* @param    transcriptionsid    Required parameter: The unique identifier for a transcription object.
*/
- (void) createViewTranscriptionAsyncWithTranscriptionsid:(NSString*) transcriptionsid
                completionBlock:(CompletedPostViewTranscription) onCompleted;

/**
* Completion block definition for asynchronous call to List Transcriptions */
typedef void (^CompletedPostListTranscriptions)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Retrieve a list of transcription objects for your Ytel account.
* @param    page    Optional parameter: The page count to retrieve from the total results in the collection. Page indexing starts at 1.
* @param    pagesize    Optional parameter: The count of objects to return per page.
* @param    status    Optional parameter: The state of the transcription.
* @param    dateTranscribed    Optional parameter: The date the transcription took place.
*/
- (void) createListTranscriptionsAsyncWithPage:(NSNumber*) page
                pagesize:(NSNumber*) pagesize
                status:(enum Status12Enum) status
                dateTranscribed:(NSString*) dateTranscribed
                completionBlock:(CompletedPostListTranscriptions) onCompleted;

@end