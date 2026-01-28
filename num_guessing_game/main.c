#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    int i = 0;
    int random = 0;

    printf("\t\t\t\t\t\t\tWelcome to the Gussing Game!!!\n\n");
    printf("Instructions: \n");
    printf("1. All entered numbers must be integers.\n");
    printf("2. Input the limits with caution.\n\n");

    printf("\nEnter the minimum number: ");
    scanf("%i", &num1);

    printf("Enter the maximum number: ");
    scanf("%i", &num2);

    while (true)
    {
        printf("What is your guess?\n");
        printf("=>");
        scanf("%i", &i);
        srand(time(NULL));
        random = rand() % (num2 - num1 + 1) + num1;

        if (i == random)
        {
            printf("You have won the game!\n");
            printf("Congratulations!!!\n");
            break;
        }
    }
}
