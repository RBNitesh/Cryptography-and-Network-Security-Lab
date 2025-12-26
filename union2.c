#include <stdio.h>

void main(){
    union u{
        int a;
        int b;
    } var;

    union u *ptr;
    ptr = &var;

    var.a = 32;
    var.b = 12;

    printf("%d\n", ptr->a);
    printf("%d", ptr->b);
}