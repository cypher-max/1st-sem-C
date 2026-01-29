#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double num = 0; 
    int i = 1;
    double result = 0;
    int ply = 0;

    printf("Enter the number you wish to multiply: ");
    scanf("%lf", &num);

    printf("How many times do you wish to multiply the number: ");
    scanf("%i", &ply);

    ply = abs(ply);

    for(i = 1; i <= ply; i++ )
    {
        result = num * i;
        printf("%.2lf\n", result);
    }
    return 0;
}