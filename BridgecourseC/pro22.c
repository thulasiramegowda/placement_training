#include<stdio.h>
int main(){
   int a=10,b=20;
   printf("%d  ",a+b);
   printf("%d  ",a-b);
   printf("%d  ",a%b);
   printf("%d  ",a/b);
   printf("%d  ",a*b);
   printf("%d  ",(b>0) && (a>0));
   printf("%d  ",a&b);
   printf("%d  ",a^b);
   printf("%d  ",a<<2);
   printf("%d  ",b>>1);
   printf("%d  ",(a>b) || (a>0));
   printf("%d  ",a!=b);
   printf("%d  ",a==b);
   int ans = (a<b)?a : b;
   printf("%d ",ans);
   return 0;
}