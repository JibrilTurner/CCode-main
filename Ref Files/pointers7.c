//
// Created by mathe on 12/31/2022.
//
/*
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
6 is the maximum number.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1;
    int num2;
    int *ptr1 = &num1; // Declare a pointer variable ptr1 and set it to the address of num1
    int *ptr2 = &num2; // Declare a pointer variable ptr2 and set it to the address of num2
    
    printf("Enter your first number: ");
    scanf("%d", &num1); // Read the first number from the user and store it in num1
    
    printf("Enter your second number: ");
    scanf("%d", &num2); // Read the second number from the user and store it in num2
    
    if (*ptr1 > *ptr2) { // i want the adresses of ptr1 and ptr2 then compare them
        printf("The greatest number is: %d\n", *ptr1); // Print the value stored at the memory location ptr1 (num1)
    } else {
        printf("The greatest number is: %d\n", *ptr2); // Print the value stored at the memory location ptr2 (num2)
    }
    
    return 0;
}
