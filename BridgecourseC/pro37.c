#include<stdio.h>
int read(void){
    int n;
    scanf("%d",&n);
    return n;
}
int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
        return 0;
        }
    }
    return 1;
}
int primeNo(n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            continue;
        }
    }
}

void output(int prime){
if(prime==1){
printf("prime");
}
else{
    printf("Not prime");
}
}

int main(){
    int n = read();
   output(prime(n));
   primeNo(n);
}