#include<stdio.h>
int main()
{	
	int numbers[5],i;

	for(i = 1;i <= 5;i++)
		scanf("%d", &numbers[i]);		

	for(i = 5;i >= 1;i--)	
		printf("%d\t", numbers[i]);

	return 0;
}
