#include <stdio.h>

void main(){
    int a[2] = {1, 2};
    int *ptr = &a[0];

    for(int i = 0; i < 2; i++){
        printf("Address of the variable : \n");
        printf("%d\n", &a[i]);
        printf("%d\n", &i[a]);
        printf("%d\n", a+i);
        printf("%d\n", i+a);

        printf("Actual value of the variable: \n");
        printf("%d\n", a[i]);
        printf("%d\n", i[a]);
        printf("%d\n", *(a+i));
        printf("%d\n", *(i+a));
    }
}