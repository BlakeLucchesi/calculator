//
//  main.c
//  calculator
//
//  Created by blakelucchesi on 7/24/20.
//  Copyright © 2020 nonya. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
  char buffer[255];
  
  while (buffer[0] != EOF) {
    printf("calc > ");
    if (fgets(buffer, 255, stdin) == NULL) {
      printf("bye bye!\n");
      return 0;
    }
    printf("calc > %s\n", buffer);
  }
  return 0;
}
