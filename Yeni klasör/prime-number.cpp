#include<stdio.h>
int main()
{
   int n, c; 

   printf("Enter a number\n");
   
   scanf("%d", &n);
   
   if ( n == 2 )  printf("It's a prime number.\n");
   else
   {
       for (c = 2 ; c <= n - 1 ; c++)
       {
           if ( (n % c) == 0 )
              break;
       }
       if ( c != n )
          printf("Not a prime number.\n");
       else
          printf("It's a prime number.\n");
   }
   return 0;
}
