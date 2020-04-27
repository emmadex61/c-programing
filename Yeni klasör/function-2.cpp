// giriş parametresi var çıkış parametresi yok. 
#include <stdio.h>
void sum(int a, int b);
void extraction(int a, int b);
void multiple(int a, int b);
int main()
{
	int a, b, D, B, K;
scanf("%d %d", &a, &b);
sum( a, b);
extraction( a, b);
multiple(a, b);
}
void sum(int a, int b)
{
	int D;
	D = a + b;
	printf("sum : %d", D);
	printf(" ");
}
void extraction(int a,int b)
{
	int B;
	B = a - b;
	printf("extraction : %d", B);
	printf(" ");
}
void multiple(int a,int b)
{
	int K;
	K = a * b;
	printf("multiple : %d", K);
	printf(" ");
}










