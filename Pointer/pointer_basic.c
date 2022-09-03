#include <stdio.h>

int main(void)
{
    int n = 150;
    int *p = &n;

    printf("The address of p: %p\n", &p);
    printf("The value of p: %p\n", p);
    printf("The address of n: %p\n", p);
    printf("The value of p pointing to: %d\n", *p);
}
