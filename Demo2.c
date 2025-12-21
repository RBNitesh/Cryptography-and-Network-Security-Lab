#include <stdio.h>

int main(){
    
    struct structure{
        int a;
        float b;
        char c;
    };

    printf("%d", sizeof(struct structure));
    return 0;
}