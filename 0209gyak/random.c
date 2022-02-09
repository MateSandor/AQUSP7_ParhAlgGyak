#include <stdio.h>
#include <stdlib.h>

//srand(time(NULL));

int main()
{
    int n;
    double f;

    printf("Random integer between [500,1000]:\n");

    n = rand() % 1000 + 500;
    printf("%d\n", n);

    printf("Random float between [500,1000]:\n");

    f = rand() % 100000 + 50000;
    printf("%.2lf\n", f/100);

    return 0;
}