#include<stdio.h>
int main(){
   int total;
   scanf("%d",&total);
   int hour = total/3600;
   int sec = total % 60;
   int min=(total%3600)/60;
   printf("%d %d %d",hour,sec,min);
   return 0;
}