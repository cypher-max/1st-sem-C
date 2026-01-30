#include <stdio.h>
#include <stdbool.h>
#include<math.h>
#include <string.h>

int main() {

    int number = 0;
    double pi = 0;
    int st = 1;

    printf("Number: ");
    scanf("%i", &number);

    for(int i = 1; i < number; i++)
    {
        st = st * 10;
    }

    pi = M_PI * st;

    printf("Pi: %lf", pi);
    return 0;
}