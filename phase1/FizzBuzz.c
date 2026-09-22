#include<stdio.h>
int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            printf("\nFizz Buzz");
        }
        else if(i%3==0){
            printf("\nFizz");
        }
        else if(i%5==0){
            printf("\nBuzz");
        }
        else{
            printf("\n%d ",i);
        }
        
    }
    return 0;
}