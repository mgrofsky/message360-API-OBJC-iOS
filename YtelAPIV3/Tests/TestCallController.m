//
//  YtelAPIV3
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <XCTest/XCTest.h>
#import "CallController.h"
#import "TestHelper.h"
#import "TestBaseController.h"

@interface  TestCallController : TestBaseController
//Controller instance for all tests
@property CallController* controller;
@end 


@implementation  TestCallController : TestBaseController

//Setup test class
//This method is called before the invocation of each test method in the test class
- (void)setUp {
    [super setUp];
    self.controller = [[CallController alloc]init];
}

//Teardown test class
//This method is called after the invocation of each test method in the test class
- (void)tearDown {
    [super tearDown];
}	


// A list of calls associated with your Ytel account    
-(void) testTestListCalls {
    //Set up test expectations
    XCTestExpectation *expectation =[self expectationWithDescription:@"High Expectations"];
    // Parameters for the API call
    NSNumber* page = nil;
    NSNumber* pageSize = nil;
    NSString* to = nil;
    NSString* from = nil;
    NSString* dateCreated = nil;

    // Set callback and perform API call
    [self.controller createListCallsAsyncWithPage: page pageSize : pageSize to : to from : from dateCreated : dateCreated  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       // Test response code
        XCTAssertEqual(200, context.response.statusCode);
        

        [expectation fulfill];
    }];
    [self wait];
}



@end
