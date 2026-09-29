#include<stdio.h>
int main(){
   int mark;
   scanf("%d",&mark);\
   if(mark>100 && mark<0){
    printf("Invalid marks");
   }
   if(mark>=90){
    printf("A");
   }
   else if(mark<90 && mark>=70){
    printf("B");
   }
   else if(mark<70 && mark>=41){
    printf("C");
   }
   else {
    printf("Fail");
   }

   return 0;
}