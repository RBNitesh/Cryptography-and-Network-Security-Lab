#include  <stdio.h>

void main(){
    union u{
        int rollno;
        float marks;
        char name[10];
    } var,*ptr;

    var.rollno = 12;
    var.marks = 43;
    // var.name = "nitesh";

    ptr = &var;
    printf("%f", ptr->marks);
    printf("\n%d", ptr->rollno);
    
    // printf("\n%c", ptr->name);
}