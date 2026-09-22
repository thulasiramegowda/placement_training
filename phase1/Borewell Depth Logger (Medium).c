#include <stdio.h>

int main() {
    int feet;
    printf("Enter foot to drill:");
    scanf("%d",&feet);
    int amt;
    if(feet<=300){
       amt = feet*75;
    }
    else if(feet>=301 && feet<=499){
       amt = feet*95;
    }
    if(feet>=500){
       amt = feet*103;
    }
    printf("\nDrilling Charge : %d",amt);
    int casing=0;
    if(feet<=60){
        casing = feet*400;
    }
    else{
        casing = 60 * 400;
    }
   
    printf("\nCasing charge:%d",casing);
     printf("\nTotal :%d",(amt+casing));   
    return 0;
}