#include <stdio.h>

void main(){
    printf("Enter the no. of students placed in CSE, ECE, MECh respectively:");
    
    int a[3];

    for(int i = 0; i < 3; i++){
        scanf("%d", &a[i]);
    }

    int min = 0, max = 0;
    for(int i = 0; i < 3; i++){
        if(a[i] < 0){
            printf("Invalid");
            return;
        }
        
        if(a[i] < a[min]){
            min = i;
        }
        if(a[i] > a[max]){
            max = i;
        }
    }

    if(a[min] == a[max]){
        printf("None of the department got highest placement.");
    }

    else{
        if(max == 0){
            printf("Department CSE got highest placement.");
        }
        if(max == 1){
            printf("Department ECE got highest placement.");
        }
        if(max == 2){
            printf("Department MECH got highest placement");
        }
    }
}