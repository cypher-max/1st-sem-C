#include <stdio.h>
#include <math.h>

int main(){
    int n = 0;
    int s = 0;
    int c = 0;
    int i = 0;

    printf("Enter the size of the series: ");
    scanf("%i", &n);

    printf("\n");

    printf("Number\t\t Square\t\t Cube\n");
    printf("______\t\t ______\t\t ____\n");

    for(i = 1; i <= n; i++)
    {
        printf("%i\t\t", i);
        s = pow(i, 2);
        printf(" %i\t\t", s);
        c = pow(i, 3);
        printf(" %i\n", c);
    }

    return 0;

}
