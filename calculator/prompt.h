//
//  prompt.h
//  calculator
//
//  Created by blakelucchesi on 7/24/20.
//  Copyright © 2020 nonya. All rights reserved.
//

#ifndef prompt_h
#define prompt_h

#include <stdio.h>

typedef char *(*computer)(char *);

int prompt(computer compute);

#endif /* prompt_h */
