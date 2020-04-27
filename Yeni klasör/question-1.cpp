#include <stdio.h>
int main  ()
{
	int i, num1, max, min, num, sum=0;
	float average;
	
	scanf("%d", &num);
	min = num;
	max = num;
	for(i = 0;i < 9;i++)
	{
		scanf("%d", &num1);
		sum += num1;
		if(max < num1)
		{
			max = num1;
		}
		
	    if(min > num1)
	    {
	    	min = num1;
		}
		
	}
	average = ((float)num + (float)sum) / 10.0;
	printf("Average:%.2f\n",average);
	printf("Max:%d\n",max);
	printf("Min:%d",min);
	
	return 0;
}
