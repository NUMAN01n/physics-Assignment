#include <stdio.h>
#include <math.h>

int main()
{
    double const pi = 3.1416;
    double theta1, theta2, theta3;

    double w;
    printf("Enter wavelength (nm): ");
    scanf("%lf", &w);

    double m;
    printf("Enter m: ");
    scanf("%lf", &m);

    double a1, a2, a3;

    if (w >= 380.00 && w <= 750.00)
    {
        printf("Enter width of slit 1 (um), a1: ");
        scanf("%lf", &a1);
        a1 = a1 * 1000; // convert micrometers to nanometers

        double x = (m * w) / a1;
        if (x >= -1 && x <= 1)
        {
            theta1 = asin(x);
            theta1 = theta1 * 180.0 / pi;
            printf("Theta 1 = %.2lf degrees\n", theta1);
        }
        else
        {
            theta1 = 90;
            printf("Theta 1 exceeds 90 degrees, setting to 90 degrees\n");
        }

        printf("Enter width of slit 2 (um), a2: ");
        scanf("%lf", &a2);
        a2 = a2 * 1000; // convert micrometers to nanometers

        double y = (m * w) / a2;
        if (y >= -1 && y <= 1)
        {
            theta2 = asin(y);
            theta2 = theta2 * 180.0 / pi;
            printf("Theta 2 = %.2lf degrees\n", theta2);
        }
        else
        {
            theta2 = 90;
            printf("Theta 2 exceeds 90 degrees, setting to 90 degrees\n");
        }

        printf("Enter width of slit 3 (um), a3: ");
        scanf("%lf", &a3);
        a3 = a3 * 1000; // convert micrometers to nanometers

        double z = (m * w) / a3;
        if (z >= -1 && z <= 1)
        {
            theta3 = asin(z);
            theta3 = theta3 * 180.0 / pi;
            printf("Theta 3 = %.2lf degrees\n", theta3);
        }
        else
        {
            theta3 = 90;
            printf("Theta 3 exceeds 90 degrees, setting to 90 degrees\n");
        }

        if (theta1 <= 90.00 && theta2 <= 90.00 && theta3 <= 90.00)
        {
            if (theta1 > theta2 && theta1 > theta3)
                printf("Slit 1 bends the light most.\n");
            else if (theta2 > theta1 && theta2 > theta3)
                printf("Slit 2 bends the light most.\n");
            else if (theta3 > theta1 && theta3 > theta2)
                printf("Slit 3 bends the light most.\n");
            else
                printf("Two or more slits bend the light equally most.\n");
        }
    }
    else
        printf("Out of the range. Please enter a valid number.\n");

    return 0;
}
