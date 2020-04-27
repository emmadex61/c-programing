#include<stdio.h>
int sum();
int multiple();
int extraction();
int main ()
{
sum();
multiple();	
extraction();
}
int sum()
{
int a, b, D;
scanf("%d %d", &a, &b);
D = a + b;
printf("Sum : %d", D);
}
int multiple()
{
int a, b, D;
scanf("%d %d", &a, &b);
D = a * b;
printf("multiple : %d",D);
}
int extraction()
{
int a, b, D;
scanf("%d %d", &a, &b);
D =a - b;
printf("extraction: %d ", D);

return 0;
}
