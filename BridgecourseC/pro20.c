#include<stdio.h>
int main(){
   int l,b;
   scanf("%d %d",&l,&b);
   int area = l*b;
   int peri = 2 * (l+b);
   printf("area = %d\nperimeter=%d",area,peri);
   return 0;
}