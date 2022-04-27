#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getAbs(int number);
int getSquare(int number);
int getCube(int number);
int getInverted(int number);
float getDegree(int number);

int main()
{
  printf("Group Dynamic\n");

  printf("getAbs(-1) = %d\n", getAbs(-1));
  printf("getSquare(3) = %d\n", getSquare(3));
  printf("getCube(3) = %d\n", getCube(3));
  printf("getInverted(3) = %d\n", getInverted(3));
  printf("getInverted(-3) = %d\n", getInverted(-3));
  printf("getDegree(3) = %f\n", getDegree(3));
}

int getAbs(int number)
{
  return abs(number);
}

int getSquare(int number)
{
  return number * number;
}

int getCube(int number)
{
  return number * number * number;
}

int getInverted(int number)
{
  return number < 0 ? abs(number) : -1 * number;
}

float getDegree(int number)
{
  return pow(number, -1);
}