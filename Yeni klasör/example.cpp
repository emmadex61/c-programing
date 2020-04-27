# include <stdio.h>
//Negatif sayı girilene kadar sayıları toplayan, ortalamasını alan ve adet gösteren örnek

int main(){
int a, b = 0, sum = 0;

for( ; ; ) {
printf("Enter number : ");
scanf("%d", &a);
if(a < 0) break;
sum += a;
b++;
}
printf("\ntotal entred number : %d.\n",b);
printf("Total value : %d.\n",sum);
printf("Average %.2f \n",(float)sum / b);

return 0;
}
