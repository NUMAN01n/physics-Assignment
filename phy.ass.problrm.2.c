#include <stdio.h>
#include <math.h>

int main()
{
    double const pi = 3.1416;

    double m1 = 3.0;
    double w1 = 530.0;
    double theta1 = 65.0;

    double radian = theta1 * (pi / 180.0);
    double sine_value = sin(radian);
    double d = (m1 * w1) / sine_value;

    double m2 = 2.0;
    double w2 = 700.0;

    double argument = (m2 * w2) / d;
    double theta_r;

    if (argument >= -1 && argument <= 1) {
        theta_r = asin(argument);
        theta_r = (theta_r * 180.0) / pi;
        printf("At an angle of %.2lf degrees from the central maxima, the second-order bright spot will be seen for red light.\n", theta_r);
    } else {
        printf("The argument for asin is out of the valid range. Calculation cannot be performed.\n");
    }

    return 0;
}
