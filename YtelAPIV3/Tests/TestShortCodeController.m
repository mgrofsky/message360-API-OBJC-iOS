//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <XCTest/XCTest.h>
#import "ShortCodeController.h"
#import "TestHelper.h"
#import "TestBaseController.h"

@interface  TestShortCodeController : TestBaseController
//Controller instance for all tests
@property ShortCodeController* controller;
@end 


@implementation  TestShortCodeController : TestBaseController

//Setup test class
//This method is called before the invocation of each test method in the test class
- (void)setUp {
    [super setUp];
    self.controller = [[ShortCodeController alloc]init];
}

//Teardown test class
//This method is called after the invocation of each test method in the test class
- (void)tearDown {
    [super tearDown];
}	


// Retrieve a list of Short Code assignment associated with your Ytel account.    
-(void) testTestListShortcodes {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* shortcode = nil;
    NSString* page = nil;
    NSString* pagesize = nil;

    // Set callback and perform API call
    [self.controller createListShortcodesAsyncWithShortcode: shortcode page : page pagesize : pagesize  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}

// Retrieve a list of Short Code messages.    
-(void) testTestListSMS {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* shortcode = nil;
    NSString* to = nil;
    NSString* dateSent = nil;
    NSNumber* page = nil;
    NSNumber* pageSize = nil;

    // Set callback and perform API call
    [self.controller createListSMSAsyncWithShortcode: shortcode to : to dateSent : dateSent page : page pageSize : pageSize  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}

// Retrive a list of inbound Sms Short Code messages associated with your Ytel account.    
-(void) testTestListInboundSMS {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSNumber* page = nil;
    NSNumber* pagesize = nil;
    NSString* from = nil;
    NSString* shortcode = nil;
    NSString* datecreated = nil;

    // Set callback and perform API call
    [self.controller createListInboundSMSAsyncWithPage: page pagesize : pagesize from : from shortcode : shortcode datecreated : datecreated  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}



@end
