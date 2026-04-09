#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = (int*)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++){
        ptr[i] = i * i;
        free(ptr);
    }

    for (int i = 0; i < 5; i++){
        printf("%d", ptr[i]);
    }

        return 0;
}