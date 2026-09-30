#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0;
    int temp=n;
    while(n>0){
        int last = n%10;
        rev = rev * 10 + last;
        n = n/10;
    }
    if(rev==temp){
        printf("palindrom");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}