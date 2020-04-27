#include<stdio.h>
int main()
{
int sum = 0, average, max, min, i, x[10];
for(i = 0;i <= 9;i++)
{
	scanf("%d", &x[i]);
	sum += x[i];
	
}	
max = x[0];
for(i = 0;i <= 9;i++)
{
if(max < x[i])
{

max = x[i];
}
}
min = x[0];
for(i = 0;i <= 9;i++)
{
if(min > x[i])
	min = x[i];
}

printf("Max : %d \n", max);
printf("Min: %d \n", min);
average = sum / 10;	
	
printf("Average : %d\n", average);

return 0;
}
