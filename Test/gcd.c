#include <stdio.h>

// function prototype
int gcd(int x, int y);
float abs(float x);
float sqrt(float x);


int main(void)
{
    printf("%d", gcd(18,6));
    printf("\n%.2f", abs(-15.2));
    printf("\n%f", sqrt(3));
}

// 최대 공약수 계산 함수
// (Euclidean Algorithm; Euclid's Algorithm)
int gcd(int x, int y)
{
    while (y != 0) {
    int temp = x % y;
    x = y;
    y = temp;
    }
    return abs(x);
}

float abs(float x) {
    if (x<0) {
        return -x;
    } else {
        return x;
    }
}

float sqrt(float x)
{
    const float epsilon = 0.00001;
    float guess = 1.0;
    if (x < 0) {
        return -1.0;
    }

    while ( abs(guess * guess -x ) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}
