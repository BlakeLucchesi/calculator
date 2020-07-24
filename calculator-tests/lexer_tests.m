//
//  lexer.m
//  calculator-tests
//
//  Created by blakelucchesi on 7/24/20.
//  Copyright © 2020 nonya. All rights reserved.
//

#import <XCTest/XCTest.h>
#include "lexer.h"

@interface lexer_tests : XCTestCase

@end

@implementation lexer_tests


- (void)testExample {
  XCTAssertFalse(validInput("asd"));
  XCTAssertTrue(validInput("1 + 2"));
  XCTAssertTrue(validInput("123 - 23"));
  XCTAssertTrue(validInput("12"));
}

@end
