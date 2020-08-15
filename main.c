#include <stdio.h>

int sum(int a, int b);
int subtract(int a, int b);

int (*p[1]) (int x, int y);

int main(void)
{
  int result;
  int i=2, j=3, op=0;

  p[0] = sum; /* address of sum() */
  p[1] = subtract; /* address of subtract() */



  printf("0: Add, 1: Subtract\n");
  while(op<0 || op>3);

  result = (*p[op]) (i, j);
  printf("%d", result);

  return 0;
}

int sum(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}





