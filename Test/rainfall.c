#include <stdio.h>
#define MONTH 12
#define YEAR 5

int main()
{
    int rainfall[5][12] =  {{13,14,15,16,17,18,18,18,18,18,18,18},
                            {18,19,20,21,22,23,23,23,23,23,23,23},
                            {23,24,25,26,27,28,28,28,28,28,28,28},
                            {28,29,30,31,32,33,33,33,33,33,33,33,},
                            {33,34,35,36,37,38,38,38,38,38,38,38}};

    float rainfall_per_year[5] = {0};
    float rainfall_per_month[12] = {0};
    float rainfall_total_average = 0;

    // calculate average rainfall per year, and fill in rainfall_per_year array
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 12; j++) {
            rainfall_per_year[i] += rainfall[i][j];
        }
        rainfall_per_year[i] /= 12;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 12; j++) {
            rainfall_total_average += rainfall[i][j];
        }
    } rainfall_total_average /= 60;

    for (int j = 0; j < 12; j++) {
        for (int i = 0; i < 5; i++) {
            rainfall_per_month[j] += rainfall[i][j];
        }
        rainfall_per_month[j] /= 5;
    }



    // print rainfall per year
    printf("Year  Rainfall(inches)\n");
    int year = 2010;
    for (int i = 0; i < 5; i++) {
        printf("%d       %.2f\n", year, rainfall_per_year[i]);
        year++;
    }
    // print total average
    printf("\nThe total average of rainfall is %.2f.\n", rainfall_total_average);

    // print rainfall per month
    printf("\nJan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    for (int i = 0; i < 12; i++) {
        printf("%.0f  ", rainfall_per_month[i]);
    } printf("\n");
    return 0;
}
