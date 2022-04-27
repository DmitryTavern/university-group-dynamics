#include <stdio.h>
#include <stdlib.h>

int getAbs(int number);

int main()
{
  printf("Group Dynamic\n");

  printf("getAbs(-1) = %d\n", getAbs(-1));
}

int getAbs(int number)
{
  return abs(number);
}