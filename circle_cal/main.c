#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    printf("This is a program to calculate any circle related values.\n\n");
    printf("Take your time and read through the instructions carefully.\n\n");
    printf("1. Make sure the name of your action is spelt correctly.\n");
    printf("2. If you are not sure of the spelling enter 'List' to see all available options\n");
    printf("   in the 'Enter your shape' prompt.\n");
    printf("3. Exept for the Shape and Action names, all inputs should be numerical decimal values.\n");
    
    char shape[50]="";
    char action[50]="";
    
    printf("\nEnter your shape: ");
    fgets(shape, sizeof(shape), stdin);
    shape[strcspn(shape, "\n")] = 0;

    if (strcmp(shape, "Circle") == 0 || strcmp(shape, "circle") == 0)
    {
        printf("Enter your action ( Diameter, Circumference, Area, Semicircle Area, Quarter Area, Arc length, Sector Area): ");
        fgets(action, sizeof(action), stdin);
        action[strcspn(action, "\n")] = 0;

        if (strcmp(action, "Diameter")==0 || strcmp(action, "diameter")==0){
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double diameter = 2 * radius;
            printf("The Diameter is: %.2lf\n", diameter);
        }
        else if (strcmp(action, "Circumference")==0 || strcmp(action, "circumference")==0){
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double circumference = 2 * M_PI * radius;
            printf("The Circumference is: %.2lf\n", circumference);
        }
        else if (strcmp(action, "Area")==0 || strcmp(action, "area")==0){
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double area = M_PI * pow(radius, 2);
            printf("The Area is: %.2lf\n", area);
        }
        else if (strcmp(action, "Semicircle Area")==0 || strcmp(action, "semicircle area")==0){
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double semicircle_area = (M_PI * pow(radius, 2)) / 2;
            printf("The Semicircle Area is: %.2lf\n", semicircle_area);
        }
        else if (strcmp(action, "Quarter Area")==0 || strcmp(action, "quarter area")==0){
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double quarter_area = (M_PI * pow(radius, 2)) / 4;
            printf("The Quarter Area is: %.2lf\n", quarter_area);
        }
        else if (strcmp(action, "Arc length") == 0 || strcmp(action, "arc length") == 0){
            double radius, angle;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Enter the angle (In radians): ");
            scanf("%lf", &angle);
            double arc_length = (radius * angle);
            printf("The Arc Length is: %.2lf\n", arc_length);
        }
        else if (strcmp(action, "Sector Area") == 0 || strcmp(action, "sector area") == 0){
            double radius, angle;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Enter the angle (In radians): ");
            scanf("%lf", &angle);
            double sector_area = ((pow(radius,2) * angle) / 2);
            printf("The Sector Area is: %.2lf\n", sector_area);
        }
        else {
            printf("Not a valid response.\n");
        }
    }
    else if (strcmp(shape, "Cylinder") == 0 || strcmp(shape, "cylinder") == 0)
    {
        printf("Enter your action (Base Area, Curved surface area, Total surface area, Volume): ");
        fgets(action, sizeof(action), stdin);
        action[strcspn(action, "\n")] = 0;

        if (strcmp(action, "Base Area") == 0 || strcmp(action, "base area"))
        {
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double base_area = (M_PI * pow(radius, 2));
            printf("The Base Area is: %.2lf\n", base_area);
        }
        else if (strcmp(action, "Curved Surface Area") == 0 || strcmp(action, "curved surface area") == 0)
        {
            double radius, height;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Enter the height: ");
            scanf("%lf", &height);
            double csa = (2 * M_PI * radius * height);
            printf("The Curved Surface Area is: %.2lf\n", csa);
        }
        else if (strcmp(action, "Total Surface Area") == 0 || strcmp(action, "total surface area") == 0)
        {
            double radius, height;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Enter the height: ");
            scanf("%lf", &height);
            double tsa = (2 * M_PI * radius * (radius + height));
            printf("The Total Surface Area is: %.2lf\n", tsa);
        }
        else if (strcmp(action, "Volume") == 0 ||  strcmp(action, "volume") == 0)
        {
            double radius, height;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Enter the height: ");
            scanf("%lf", &height);
            double volume = (M_PI * pow(radius , 2) * height);
            printf("The Volume is: %.2lf\n", volume);
        }
        else {
            printf("Not a valid response.");
        }
    }
    else if (strcmp(shape, "Cone") == 0 || strcmp(shape, "cone") == 0)
    {
        printf("Enter your action (Base Area, Curved surface area, Total surface area, Volume): ");
        fgets(action, sizeof(action), stdin);
        action[strcspn(action, "\n")] = 0;

        if (strcmp(action, "Base Area") == 0 || strcmp(action, "base area"))
        {
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double base_area = (M_PI * pow(radius, 2));
            printf("The Base Area is: %.2lf\n", base_area);
        }
        else if (strcmp(action, "Curved Surface Area") == 0 || strcmp(action, "curved surface area") == 0)
        {
            double radius, height;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Enter the let slant height: ");
            scanf("%lf", &height);
            double csa = (M_PI * radius * height);
            printf("The Curved Surface Area is: %.2lf\n", csa);
        }
        else if (strcmp(action, "Total Surface Area") == 0 || strcmp(action, "total surface area") == 0)
        {
            double radius, height;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Enter the let slant height: ");
            scanf("%lf", &height);
            double tsa = (M_PI * radius * (radius + height));
            printf("The Total Surface Area is: %.2lf\n", tsa);
        }
        else if (strcmp(action, "Volume") == 0 || strcmp(action, "volume") == 0)
        {
            double radius, height;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Enter the height: ");
            scanf("%lf", &height);
            double volume = ((M_PI * pow(radius , 2) * height) / 3);
            printf("The Volume is: %.2lf\n", volume);
        }
        else 
        {
            printf("Not a valid response.\n");
        }
    }
    else if (strcmp(shape, "Sphere") == 0 || strcmp(shape, "sphere") == 0)
    {
        printf("Enter your action (Surface area, Volume): ");
        fgets(action, sizeof(action), stdin);
        action[strcspn(action, "\n")] = 0;

        if (strcmp(action, "Surface Area") == 0 || strcmp(action, "surface area") == 0)
        {
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double surface_area = (4 * M_PI * pow(radius, 2));
            printf("The Surface Area is: %.2lf\n", surface_area);
        }
        else if (strcmp(action, "Volume") == 0 || strcmp(action, "volume") == 0)
        {
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double volume = ((4 * M_PI * pow(radius , 3)) / 3);
            printf("The Volume is: %.2lf\n", volume);
        }
        else 
        {
            printf("Not a valid reponse.\n");
        }
    }
    else if (strcmp(shape, "Hemisphere") == 0 || strcmp(shape, "hemisphere"))
    {
        printf("Enter your action (Curved surface area, Total surface area, Volume): ");
        fgets(action, sizeof(action), stdin);
        action[strcspn(action, "\n")] = 0;

        if (strcmp(action, "Curved Surface Area") == 0 || strcmp(action, "curved surface area") == 0)
        {
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double csa = (2 * M_PI * pow(radius, 2));
            printf("The Curved Surface Area is: %.2lf\n", csa);
        }
        else if (strcmp(action, "Total Surface Area") == 0 || strcmp(action, "total surface area") == 0)
        {
            double radius, height;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double tsa = (3 * M_PI * pow(radius, 2));
            printf("The Total Surface Area is: %.2lf\n", tsa);
        }
        else if (strcmp(action, "Volume") == 0 || strcmp(action, "volume") == 0)
        {
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double volume = ((2 * M_PI * pow(radius , 3)) / 3);
            printf("The Volume is: %.2lf\n", volume);
        }
        else 
        {
            printf("Not a valid reponse.\n");
        }
    }
    else if (strcmp(shape, "List") == 0 || strcmp(shape, "list") == 0)
    {
        printf("The Shapes are: \n");
        printf("1.Circle\n");
        printf("2.Cylinder\n");
        printf("3.Cone\n");
        printf("4.Sphere\n");
        printf("5.Hemisphere\n");

    }
    else
    {
        printf("Restart the program and next time enter a valid response.\n");
    }
    return 0;
}