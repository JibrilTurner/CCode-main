#include <stdio.h>
#include <stdlib.h>

int max(int num1,int num2) 
{
    if(num1 > num2) 
    {
        return num1; 
    }
    else 
    {
        return num2; 
    }
}

int main()
{
    printf("%d", max(4, 10)); 
    return 0;
}