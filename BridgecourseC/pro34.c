#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=0,secound=0;
     for(int i=0;i<n;i++){
     if(arr[i]>first){
        secound = first;
        first = arr[i];
     }
    }
    printf("%d %d",first,secound);
    return 0;
}