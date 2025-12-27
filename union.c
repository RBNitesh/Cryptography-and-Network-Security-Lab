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
    // printf("%f\n", ptr->marks);
    // printf("%d\n", ptr->rollno);

    printf("%d\n", sizeof(var));

    // printf("\n%c", ptr->name);
}