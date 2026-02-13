#include<stdio.h>
#include<math.h>

int main(){
    float r = 0;
    float d = 0;
    float c = 0;
    float a = 0;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("\n");

    d = r * 2;
    c = 2 * M_PI * r;
    a = M_PI * pow(r, 2);

    printf("The Diameter is %.2f\n", d);
    printf("The Circumference is %.2f\n", c);
    printf("The area is %.2f\n", a);
}
