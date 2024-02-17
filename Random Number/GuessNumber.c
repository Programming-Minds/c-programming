#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userNumber, randonNumber,
        startNumber, endNumber,
        numberOfTry, userTrys = 0, noOfTrysLeft = 0;

    printf("Enter Start Number : ");
    scanf("%d", &startNumber);

    printf("Enter End Number : ");
    scanf("%d", &endNumber);

    if (startNumber < 0 || endNumber < 0)
    {
        printf("Start number and end number must be positive numbers");
        return 0;
    }
    else if (startNumber == endNumber)
    {
        printf("Start number must not be equal");
        return 0;
    }
    else if (startNumber > endNumber)
    {
        printf("Start number must be less then end number");
        return 0;
    }

    printf("Enter Number Of Try : ");
    scanf("%d", &numberOfTry);

    if (numberOfTry <= 0)
    {
        printf("Number of try must be greater then zero.");
        return 0;
    }

    printf("Program will guess number in between(%d - %d)\n", startNumber, endNumber);

    srand(time(NULL));

    randonNumber = (rand() % (endNumber + startNumber + 1)) + startNumber;

    while (1)
    {
        noOfTrysLeft = (numberOfTry - userTrys);

        printf("Enter Number(No of trys left %d) : ", noOfTrysLeft);
        scanf("%d", &userNumber);

        if (userNumber < randonNumber)
            printf("Your number is lower then random number\n");
        else if (userNumber > randonNumber)
            printf("Your number is larger then random number\n");
        else
        {
            printf("You guessed the correct number");
            break;
        }

        userTrys++;

        if (userTrys >= numberOfTry)
        {
            printf("No of trys is over random was %d", randonNumber);
            return 0;
        }
    }

    return 0;
}