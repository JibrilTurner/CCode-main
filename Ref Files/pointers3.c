//
// Created by mathe on 12/31/2022.
//
//
// Created by mathe on 12/31/2022.
//

#include <stdio.h>
#include <stdlib.h>


int main(){
    int x[5] = {0, 2, 3, 4, 5};
    int* ptr;
    
    ptr =  &x[2]; // gets the memory address of the second element in array x 
    
    printf("%d\n", *(ptr+1)); // prints out the ptr value + 1 which is 2+1 
    printf("%d\n", *(ptr-1)); // prints out the ptr value - 1 which is 2-1 
    printf("%d\n", *(ptr));   // just prints out the ptr value of 2
    
    return 0;
}