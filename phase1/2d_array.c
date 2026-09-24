//finding sum of right diaognal elements
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
   int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        scanf("%d",&arr[i][j]);
    }
    }
     for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
             printf("%d ",arr[i][j]);
     }
         printf("\n");
     }
     int sum=0;
    for(int i=0;i<a;i++){
         for(int j=0;j<b;j++){
                if((i==0 && j==b) || i==j || (j==0 && i==a)){
            sum= sum + arr[i][j];
                }
            }
     }
     printf("%d ",sum);
    
    return 0;
}