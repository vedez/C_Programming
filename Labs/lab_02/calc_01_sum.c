/*
Description:
    Calculate the sum of the integers 1 - 5
*/

#include <stdio.h>

int main()
{
    int sum = 0;

    for(int i = 1; i <= 5; i++) sum += i;

    printf("The sum of 1 to 5 is %d", sum);

    return 0;
}