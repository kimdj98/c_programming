#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // declare enum Company
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    // print the enum integral for XEROX, GOOGLE, EBAY
    printf("%i\n%i\n%i", XEROX, GOOGLE, EBAY);

    return 0;
}
