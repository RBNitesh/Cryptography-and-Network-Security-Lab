#include <stdio.h>
#include <stdlib.h>

void main(){
    // int *ptr1;
    // ptr1 = (int*) malloc(4 * sizeof(int));
    // printf("%d\n", sizeof(*ptr1));

    // float *ptr2;
    // ptr2 = (float*) malloc(sizeof(float));
    // free(ptr2);
    // printf("%d\n", sizeof *ptr2);
    // printf("%d\n", ptr2);

    int *ptr;
    ptr = (int*) malloc(10);

    *ptr = 10;
    free(ptr);

    printf("%d",  *ptr);



    // int * ptr;
    // ptr = (int *)malloc(10);
    // 
    // *ptr = 10;
    // printf("%d\n", *ptr);
    // free(ptr);
    // 
    // printf("%d", *ptr);
    // return 0;
}