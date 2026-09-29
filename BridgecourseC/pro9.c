#include<stdio.h>
int main(){
int i,j,count=0;
for(int i=1;i<=3;i++){
    for(j=1;j<=i;j++){
        printf("*");
        count++;
    }
    printf("\n");
}
printf("count = %d",count);
   return 0;
}