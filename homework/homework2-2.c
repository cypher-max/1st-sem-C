#include<stdio.h>

int main(){
    char c;
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    int stopgap = 0;
    int incriment = 0;

    printf("Enter a sign: ");
    scanf("%c", &c);

    printf("Enter the length of the pattern: ");
    scanf("%i", &n);

    printf("\n");

    stopgap = n % 2;

    if (stopgap == 1)
    {
        incriment = 3;
    }
    else
    {
        incriment = 2;
    }

    for (i = 0; i < n; i+=2)
    {
        for (j = n; j > i; j--)
        {
            printf("%c", c);
        }

        printf("\n\n");
    }
    for (i = 0; i < n-1; i+=2)
    {
         for (k = 0; k < (i + incriment); k++)
        {
            printf("%c", c);
        }

        printf("\n\n");
    }
    return 0;
}
