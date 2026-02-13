#include<stdio.h>

int main(){
    float c = 0;
    float f = 0;

    printf("Enter the Fahrenheit value: ");
    scanf("%f", &f);

    c  = ((f-32) * 5)/9;

    printf("The temperature is %.2f° C\n", c);

    return 0;
}
