#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    int a,b,n;

    srand(time(NULL));

    printf("Please give the smallest number:\n");

    scanf("%d",&a);

    printf("Please give the largest number:\n");

    scanf("%d",&b);

      n = rand() % b + a;
    printf("\n\n%d\n", n);



    return 0;
}
