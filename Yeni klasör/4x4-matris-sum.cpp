/* 4*4 lük matris
matrisin bütün elemanlarının toplamını versin
çarp matrisin çapraz değerlerinin çarpımı */

#include<stdio.h>
int main()
{
int temp, i, j, x[4][4];

for(i = 0;i <= 3; i++)
for(j = 0;j <= 3; j++)
	scanf("%d", &x[i][j]);

for(i = 0;i <= 3; i++)
{
    for(j = 0;j <= 3; j++)
    {
      printf("%d ", x[i][j]);
    }
    printf("\n");
     
}
for(i = 0;i <= 3; i++)
for(j = 0;j <= 3; j++)
    temp += (x[i][j]);


printf("temp = %d ", temp);

return 0;
}
