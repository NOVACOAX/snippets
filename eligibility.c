#include <stdio.h>

int main(void)
{
    //* Get age
    printf("What is your age: \n");
    int age;
    scanf("%i", &age);

    //* Check if age is 18 and over
    if (age >= 18){
        printf("Yaay! You are eligible for voting.\n");
    }else{
        printf("Huh! You are not eligible for voting.\n");
    }
}