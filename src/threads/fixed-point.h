#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#include<iostream>
#include<stdint.h>


unsigned char p = 17;
unsigned char q = 14;
unsigned char f = 1 << q;

// the fixed-point numbers in this file are 17.14
// x and y refer to fixed-point numbers, n refers to a integer

typedef int32_t fixed;

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
}

// Divide a fixed-point number x by an integer n
fixed
divFI(fixed x, int n)
{
}

int main() {
  int a_i = 16;
  fixed a_f = toFP(a_i);
  int b_i = 8;
  fixed b_f = toFP(b_i);

  std::cout << toIntZero(addFI(a_f, b_i)) << std::endl;
  std::cout << toIntZero(addFF(a_f, b_f)) << std::endl;

  std::cout << toIntZero(multFI(a_f, b_i)) << std::endl;
  std::cout << toIntZero(multFF(a_f, b_f)) << std::endl;

  return 0;
}

#endif /* threads/fixed-point.h */
