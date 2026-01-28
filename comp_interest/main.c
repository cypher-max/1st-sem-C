#include<stdio.h>
#include<math.h>

int main() {

    // This is a compaounding interest rate  formula written in C code.

    double p = 0;
    double r = 0;
    double n = 0;
    double t = 0;
    double total = 0;

    printf("Enter your principal amount: ");
    scanf("%lf", &p);

    printf("Enter your interst rate: ");
    scanf("%lf", &r);
    r = r / 100;

    printf("Enter the number of compaunding years: ");
    scanf("%lf", &t);

    printf("Enter the number of times interst is compounded in a single year: ");
    scanf("%lf", &n);

    total = p * pow((1 + (r / n)), (n * t));

    printf("Your total amount to be paid is $%.2lf in %.2lf years.\n", total, t);

}