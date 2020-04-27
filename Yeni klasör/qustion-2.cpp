#include <stdio.h>
int main ()
{
	int i,counter5,counter9,sum5,sum9;
	
counter5 = 0;
counter9 = 0;
sum5 = 0;
sum9 = 0;


	for(i = 0;i < 100;i++) 
	{
		if (i >= 5 && i % 5 == 0)
		{
			counter5++;
			sum5 = sum5+i;
			
		}
		
		if(i >= 9 && i % 9 == 0)
		{
			counter9++;
			sum9 = sum9+i;
		}
	}
	
	printf ("Number of numbers that can be divided by 5: %d\n",counter5);
	printf("Number of numbers that can be divided by 9: %d\n",counter9);
	printf("Sum of numbers divisible by 5: %d\n",sum5);
    printf("Sum of numbers divisible by 9: %d\n",sum9);
	
	return 0;
		   
	}
