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

static int f = 1 << 14;

// Converts an integer n to a fixed-point number
fixed
toFP(int n)
{
  return n * f;
}

// Converts a fixed-point number x to an integer, rounding toward zero
int
toIntZero(fixed x)
{
  return x / f;
}

// Converts a fixed-point number x to an integer, rounding to nearest integer
int
toIntRound(fixed x)
{
  if (x >= 0)
    return (x + f / 2) / f;
  else
    return (x - f / 2) / f;
}

// Add 2 fixed-point number, x and y
fixed
addFF(fixed x, fixed y)
{
  return x + y;
}

// Subtracts a fixed-point number y from a fixed-point number x
fixed
subFF(fixed x, fixed y)
{
  return x - y;
}

// Add a fixed-point number x to an integer n
fixed
addFI(fixed x, int n)
{
  return x + toFP(n);
}

// Subtract an integer n from a fixed-point number x
fixed
subFI(fixed x, int n)
{
  return x - toFP(n);
}

// Multiply a fixed-point number x by a fixed-point number y
fixed
multFF(fixed x, fixed y)
{
  return ((int64_t) x) * y / f;
}

// Multiply a fixed-point number x by an integer n
fixed
multFI(fixed x, int n)
{
  return x * n;
}

// Divide a fixed-point number x by a fixed-point number y
fixed
divFF(fixed x, fixed y)
{
  return ((int64_t) x) * f / y;
}

// Divide a fixed-point number x by an integer n
fixed
divFI(fixed x, int n)
{
  return x / n;
}
#endif /* threads/fixed-point.h */
