#include <stdio.h>

void fonk1 (int *ip1);

void main (void)
{
  int id1;
  id1 = 34;

  fonk1 (&id1); /* 1 */
  printf("Variable value in main function : %d", id1);
}

void fonk1 (int *ip1)
{
  *ip1 = (*ip1) + 27;
  printf("Variable value in function : %d\n", *ip1);
}

