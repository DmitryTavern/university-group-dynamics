#include <stdio.h>
#include <stdlib.h>

int getAbs(int number);
int getSquare(int number);
int getCube(int number);

int main()
{
  printf("Group Dynamic\n");

  printf("getAbs(-1) = %d\n", getAbs(-1));
  printf("getSquare(3) = %d\n", getSquare(3));
  printf("getCube(3) = %d\n", getCube(3));
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