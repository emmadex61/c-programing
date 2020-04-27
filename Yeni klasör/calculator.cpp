#include <stdio.h>
int main(){
 int x, y, choose;
 printf("___ MENU ___\n");
 printf("[1] Addition\n");
 printf("[2] Subtraction\n");
 printf("[3] Multiplication\n");
 printf("[4] Division\n");
 printf("Menu choose: ");
 scanf("%d", &choose);
 switch (choose){
  case 1:
   printf("Enter 2 number: ");
   scanf("%d %d", &x, &y);
   printf("Equal : %d", x + y);
   break;
  case 2:
   printf("Enter 2 number: ");
   scanf("%d %d", &x, &y);
   printf("Sonuc: %d", x - y);
   break;
  case 3:
   printf("Enter 2 number: ");
   scanf("%d %d", &x, &y);
   printf("Sonuc: %d", x * y);
   break;
  case 4:
   printf("Enter 2 number: ");
   scanf("%d %d",&x,&y);
   printf("Sonuc: %d", x / y);
   break;
  default:
   printf("ERROR !");
 }
        return 0;
}
