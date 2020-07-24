//
//  lexer.c
//  calculator
//
//  Created by blakelucchesi on 7/24/20.
//  Copyright © 2020 nonya. All rights reserved.
//

#include "lexer.h"

bool validInput(char *input) {
  char c;
  int i = -1;
  while (true) {
    i++;
    c = input[i];
    if (c == '\n' || c == '\0') {
      return true; // end of string success
    }
    if (c >= '0' && c <= '9') {
      continue; // [0-9]
    }
    if (c == '+' || c == '-') {
      continue; // + or -
    }
    if (c == ' ') {
      continue; // whitespace
    }
    return false; // unknown character invalid!
  }
}
