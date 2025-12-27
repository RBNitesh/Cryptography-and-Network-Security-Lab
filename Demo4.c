#include <stdio.h>
#include <stdlib.h>

void main(){

    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    *ptr = 20;
    printf("%d", *ptr);

    free(ptr);

    ptr = NULL;

    if(ptr != NULL)
        printf("%d", *ptr);

    int *var = (int *)calloc(2, 4 * sizeof(int));

    for (int i = 0; i < 8; i += 1){
        printf("%d ", var[i] = i * i + 1);
    }

    int a = 4;
    printf("%d", 4 == a);
}