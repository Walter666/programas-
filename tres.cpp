#include <stdio.h>
int main (){
int a;
printf("introduzca un numero\n");
scanf("%d",& a);
for(int j=0;j<a;j++)
{
for(int i=0;i<=j;i++)
{
printf("*");
}
printf("\n");
}
return 0;
}
