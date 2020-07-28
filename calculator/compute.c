//
//  compute.c
//  calculator
//
//  Created by blakelucchesi on 7/24/20.
//  Copyright © 2020 nonya. All rights reserved.
//

#include "compute.h"
#include "lexer.h"

char *compute(char *input)
{
  if (validInput(input)) {
    return "Valid!";
  }
  return "Invalid!";
}
