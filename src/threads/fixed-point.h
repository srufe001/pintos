#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#include<stdint.h>

// the fixed-point numbers in this file are 17.14
// x and y refer to fixed-point numbers, n refers to a integer

typedef int32_t fixed;

// Converts an integer n to a fixed-point number
fixed
toFP(int n)
{
}

// Converts a fixed-point number x to an integer, rounding toward zero
int
toIntZero(fixed x)
{
}

// Converts a fixed-point number x to an integer, rounding to nearest integer
int
toIntRound(fixed x)
{
}

// Add 2 fixed-point number, x and y
fixed
addFF(fixed x, fixed y)
{
}

// Subtracts a fixed-point number y from a fixed-point number x
fixed
subFF(fixed x, fixed y)
{
}

// Add a fixed-point number x to an integer n
fixed
addFI(fixed x, int n)
{
}

// Subtract an integer n from a fixed-point number x
fixed
subFI(fixed x, int n)
{
}

// Multiply a fixed-point number x by a fixed-point number y
fixed
multFF(fixed x, fixed y)
{
}

// Multiply a fixed-point number x by an integer n
fixed
multFI(fixed x, int n)
{
}

// Divide a fixed-point number x by a fixed-point number y
fixed
divFF(fixed x, fixed y)
{
}

// Divide a fixed-point number x by an integer n
fixed
divFI(fixed x, int n)
{
}

#endif /* threads/fixed-point.h */
