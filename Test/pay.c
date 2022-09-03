#include <stdio.h>


int main()
{
    double basic_pay_rate = 12.0;
    double over_pay_rate = 18.0;
    double work_hours;

    printf("Enter how many hours you work: ");
    scanf("%lf", &work_hours);
    printf("\n");

    double tax = 0.0;
    double pay = 0.0;

    if (work_hours > 40.0) {
        pay = 40.0 * basic_pay_rate + (work_hours - 40.0) * over_pay_rate;
    } else {
        pay = work_hours * basic_pay_rate;
    }
    printf("%f", pay);
    if (pay <= 300) {
        tax = pay * 0.15;
    } else if (pay <=450) {
        tax = 300 * 0.15 + (pay - 300) * 0.2;
    } else {
        tax = 300 * 0.15 + 150 * 0.2 + (pay - 450) * 0.25;
    }

    printf("your tax is %.3f", tax);

    return 0;
}
