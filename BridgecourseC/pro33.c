#include<stdio.h>
#include<string.h>
int main(){
    char str[49];
    fgets(str,49,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
     printf("lenght=%d ",len);
     int con=0,vowels=0,digit=0,other=0;
    for(int i=0;str[i]!='\0' && str[i] !='\n';i++){
    if(str[i]=='A' || str[i]=='a'|| str[i]=='e' || str[i]=='E' || str[i]=='i' 
        || str[i]=='I'|| str[i]=='o' || str[i]=='O' || str[i]=='U' || str[i]=='u' ){
        vowels++;
    }
    else if(str[i]>='0' && str[i]<='9'){
        digit++;
    }
    else if((str[i]>='a' && str[i]<='z') || (str[i] >='A' && str[i]<='Z')){
        con++;
    }
    else{
        other++;
    }

    }
    printf("con=%d vowels=%d digit=%d other=%d",con,vowels,digit,other);
    return 0;
}