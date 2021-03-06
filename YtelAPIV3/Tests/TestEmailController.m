//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <XCTest/XCTest.h>
#import "EmailController.h"
#import "TestHelper.h"
#import "TestBaseController.h"

@interface  TestEmailController : TestBaseController
//Controller instance for all tests
@property EmailController* controller;
@end 


@implementation  TestEmailController : TestBaseController

//Setup test class
//This method is called before the invocation of each test method in the test class
- (void)setUp {
    [super setUp];
    self.controller = [[EmailController alloc]init];
}

//Teardown test class
//This method is called after the invocation of each test method in the test class
- (void)tearDown {
    [super tearDown];
}	


// Retrieve a list of emails that have been blocked.    
-(void) testTestBlockedEmails {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* offset = nil;
    NSString* limit = nil;

    // Set callback and perform API call
    [self.controller createBlockedEmailsAsyncWithOffset: offset limit : limit  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}

// Retrieve a list of emails that are on the spam list.    
-(void) testTestSpamEmails {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* offset = nil;
    NSString* limit = nil;

    // Set callback and perform API call
    [self.controller createSpamEmailsAsyncWithOffset: offset limit : limit  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}

// Retrieve a list of emails that have bounced.    
-(void) testTestBouncedEmails {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* offset = nil;
    NSString* limit = nil;

    // Set callback and perform API call
    [self.controller createBouncedEmailsAsyncWithOffset: offset limit : limit  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}

// Retrieve a list of invalid email addresses.    
-(void) testTestInvalidEmails {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* offset = nil;
    NSString* limit = nil;

    // Set callback and perform API call
    [self.controller createInvalidEmailsAsyncWithOffset: offset limit : limit  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}

// Retrieve a list of email addresses from the unsubscribe list.    
-(void) testTestListUnsubscribedEmails {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSString* offset = nil;
    NSString* limit = nil;

    // Set callback and perform API call
    [self.controller createListUnsubscribedEmailsAsyncWithOffset: offset limit : limit  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}



@end
