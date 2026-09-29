#include<stdio.h>
int main(){
   int r;
   printf("enter radius:");
   scanf("%d",&r);
   float area = 3.14 * r *r;
   float cir = 3.14 * 2 *r;
   printf("%.3f %.3f",area,cir); 
   return 0;
}