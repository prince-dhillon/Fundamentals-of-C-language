#include<stdio.h>
typedef struct class
{
    int rollno;
    int no;
}student;
void fun(student s){
    printf("%d",s.rollno);
}
int main(){
    student prince;
    prince.rollno=3260;
    prince.no=100;
    fun(prince);
    return 0;
}