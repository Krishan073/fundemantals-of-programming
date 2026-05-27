#include <stdio.h>

int main(void)
{
    /* Conversion factors */
    const double KM_TO_MILES = 0.621371;
    const double KM_TO_METRES = 1000.0;
    const double KM_TO_CM = 100000.0;

    double km;
    double celsius;

    /* Distance conversion */
    printf("Enter distance in kilometres: ");
    scanf("%lf", &km);

    printf("\nDistance Conversions:\n");
    printf("%.2lf km = %.2lf miles\n", km, km * KM_TO_MILES);
    printf("%.2lf km = %.2lf metres\n", km, km * KM_TO_METRES);
    printf("%.2lf km = %.2lf centimetres\n", km, km * KM_TO_CM);

    /* Temperature conversion */
    printf("\nEnter temperature in Celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;

    printf("\nTemperature Conversions:\n");
    printf("%.2lf C = %.2lf F\n", celsius, fahrenheit);
    printf("%.2lf C = %.2lf K\n", celsius, kelvin);

    return 0;
}