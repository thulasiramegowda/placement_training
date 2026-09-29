#include<stdio.h>
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
if(n>=0){
    printf("positive\n");
}
else{
    printf("Negitive\n");
}
if(n%2==0){
    printf("Even\n");
}
else{
    printf("odd\n");
}
   return 0;
}