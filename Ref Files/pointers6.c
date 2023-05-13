//
// Created by mathe on 12/31/2022.
//
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
#include <stdio.h>

// The point of using pointers in this program is to show that they 
// can be used to modify the orignal varibles in a program rather
// than just making copys 
int doesmath(int *, int *);

int main() {
    int num1;
    int num2;
    int sum = 5;
    
    printf("Enter your first number: ");
    scanf("%d", &num1);                   // sets up for the pointer
    
    printf("Enter your second number: ");
    scanf("%d", &num2);                   // sets up for the pointer 
    
    sum = doesmath(&num1, &num2);         // following up 
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    
    
    return 0;
}

int doesmath(int *num1, int *num2) {      // saying i want your address 
    int sum;
    sum = *num1 + *num2;                  // replacing sum with the memory location of the opration
    return sum;       
}
