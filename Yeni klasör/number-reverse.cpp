//klavyeden girilen bir say�n�n tersini yaz�n�z

# include <stdio.h>
int main()
{
int number, reverse_number;

printf("Enter a number : ");
scanf("%d", &number);

printf("Reverse of number : ");
    while( number > 10 )
	{
    reverse_number = number % 10;
    printf("%d",reverse_number);
    number /= 10;
    }
printf("%d\n",number);
return 0;
}
