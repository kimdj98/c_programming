#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    // delcaring variables
    double width=atoi(argv[1]);
    double height=atoi(argv[2]);
    double perimeter=0.0;
    double area=0.0;

    // performing permieter, area calcuations
    perimeter = 2.0*(width+height);
    area = width*height;

    // displaying input
    printf("perimeter is %.2f, area is %.2f", perimeter, area);


    return 0;
}

//int main()
//{
//
//}
