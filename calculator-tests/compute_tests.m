//
//  compute_tests.m
//  calculator-tests
//
//  Created by blakelucchesi on 7/24/20.
//  Copyright © 2020 nonya. All rights reserved.
//

#import <XCTest/XCTest.h>

#import "compute.h"

@interface compute_tests : XCTestCase

- (void)assert:(char *)a equals:(char *)b;

@end

@implementation compute_tests

- (void)assert:(char *)a equals:(char *)b {
  int i = 0;
  while (true) {
    bool endA = a[i] == EOF || a[i] == '\n';
    bool endB = b[i] == EOF || b[i] == '\n';
    XCTAssert(endA == endB);
    XCTAssertEqual(a[i], b[i]);
    i++;
    if (endA || endB)
      return;
  }
}

- (void)testExample {
  [self assert:"3" equals:compute("1 + 2")];
  [self assert:"Invalid!" equals:compute("1 + !")];
}



@end
