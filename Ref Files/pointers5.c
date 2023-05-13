/*
// Created by mathe on 12/31/2022.
//
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11
 */


#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int num1;
    int num2;
    int* ptr;
    int* mtr;
    int sum;
    
    printf("enter your num");
    scanf("%d", &num1);
    
    printf("enter your num");
    scanf("%d", &num2);
    
    ptr = &num2; // Hold the Memory Location of Num2
    mtr = &num1; // Holds the Memory Location of Num1
    
    sum = *ptr + *mtr; //* retrieves the value from memory that is pointed to by a pointer
    printf(" The sum of the entered numbers is : %d\n\n",sum);
    
    return  0;
}