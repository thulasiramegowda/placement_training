#include<stdio.h>
typedef struct
{
    char name[30];
    int rollNo;
    int mark1;
    int mark2;
    int mark3;
}student;

student inputStudent(void){
    student s;
    scanf("%s %d %d %d %d",&s.name,&s.rollNo,&s.mark1,&s.mark2,&s.mark3);
    return s;
    }

int totalmarks(student s){
    return s.mark1+s.mark2+s.mark3;
}
double percentage(student s){
    return (double)totalmarks(s)/3;
}
void output(student s,int total,double pct){
   printf("%s ",s.name);
   printf("%d ",s.rollNo);
   printf("%d ",total);
   printf("%.2lf ",pct);
}
int main(){
   student s= inputStudent();
   output(s,totalmarks(s),percentage(s));
    return 0;
}