#include<stdio.h>
int main(){
int a,b;
printf("Enter a and b:");
scanf("%d %d",&a,&b);
printf("+ , - ,* ,/, %, enter: ");
int choose;
scanf("%d",&choose);
int result;
switch(choose){
    case 1: result = a+b;
    printf("Sum=%d",result);
    break;
    case 2: result = a-b;
    printf("Difference=%d",result);
    break;
    case 3: result = a*b;
    printf("product=%d",result);
    break;
    case 4: 
    if(b>0){result = a/b;
    printf("Sum=%d",result);
    break;
    }
    else{
        printf("Invalid");
        break;
    }
    case 5:if(b>0){result = a%b;
    printf("Sum=%d",result);
    break;
    }
    else{
        printf("Invalid");
        break;
    }
}
   return 0;
}