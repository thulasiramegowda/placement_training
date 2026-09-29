#include<stdio.h>
#include<string.h>
int main(){
char city[]="MYSURU";
printf("sizeof = %zu\n",sizeof(city));
printf("strlen = %zu\n", strlen(city));
printf("last char = %c\n",city[strlen(city)-1]);
   return 0;
}