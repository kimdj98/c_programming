#include <stdio.h>

int main()
{
    int minutes;
    int minutesPerYear = 365*24*60;
    int minutesPerDay = 24*60;
    double Years;
    double Days;

    printf("Enter the number of minutes:");
    scanf("%d", &minutes);

    Years = (double)minutes / (double)minutesPerYear;
    Days = (double)minutes / (double)minutesPerDay;
    printf("\n in Years %.2f", Years);
    printf("\n in Days %.2f", Days);
}
