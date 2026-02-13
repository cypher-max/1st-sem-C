#include<stdio.h>

int main(){
    float kg = 0;
    float pound = 0;

    printf("Enter the weight in kilograms: ");
    scanf("%f", &kg);

    pound = (kg * 2.204);

    printf("\nThe weight is %.2f pounds\n", pound);

    return 0;
}
