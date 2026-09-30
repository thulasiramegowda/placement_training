#include<stdio.h>
struct student
{
    char name[50];
    int rollNo;
    int mark;
    char clg[50];
};

int main(){
   struct student s[3];
   for(int i=0;i<3;i++){
    scanf("%s%d%d%s",&s[i].name,&s[i].rollNo,&s[i].mark,&s[i].clg);
   }
   printf("Student details:\n");
   for(int i=0;i<3;i++){
    printf("Student name : %s\nstudent Roll Number:%d\nStudent mark:%d\nStudent college:%s\n\n",&s[i].name,s[i].rollNo,s[i].mark,s[i].clg);
   }

    return 0;
}