#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#include<stdint.h>

// the fixed-point numbers in this file are 17.14
// x and y refer to fixed-point numbers, n refers to a integer

typedef int32_t fixed;

fixed addFI(fixed, int);

fixed subFI(fixed, int);

fixed subFF(fixed, fixed);

fixed addFF(fixed, fixed);

int toIntRound(fixed);

int toIntZero(fixed);

fixed toFP(int);

fixed multFF(fixed, fixed);

fixed multFI(fixed, int);

fixed divFF(fixed, fixed);

fixed divFI(fixed, int);

#endif /* threads/fixed-point.h */
