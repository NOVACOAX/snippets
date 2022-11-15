
#include <stdio.h>

int main(void)
{
    //* Get user input
    printf("First value: \n");
    int val1;
    scanf("%i", &val1);

    printf("Second value: \n");
    int val2;
    scanf("%i", &val2);

    //* Addition
    int sum = val1 + val2;
    printf("\n Addition: \n %i + %i = %i\n", val1, val2, sum);

    //* Subtraction
    int dif = val1 - val2;
    printf(" Subtraction: \n %i - %i = %i\n", val1, val2, dif);

    //* Multiplication
    int multiple = val1 * val2;
    printf(" Multiplication: \n %i * %i = %i\n", val1, val2, multiple);

    //* Division
    int div = val1 / val2;
    printf(" Division: \n %i / %i = %i\n", val1, val2, div);
}