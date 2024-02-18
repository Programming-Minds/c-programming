#include <stdio.h>

int Factorial(int number);

int main()
{
    int number, factorial;

    printf("Enter Number : ");
    scanf("%d", &number);

    factorial = Factorial(number);

    printf("Factorial : %d! = %d", number, factorial);

    return 0;
}

int Factorial(int number)
{
    if (number <= 1)
        return 1;
    else
        return number * Factorial(number - 1);
}