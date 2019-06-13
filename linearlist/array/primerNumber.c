#include <stdio.h>
#include <math.h>
int main(int prime)
{
    int a;
    int i = 2;
    printf("Please enter a number!\n");
    scanf("%d", &a);
    double sqarta = sqrt(a);
    while (a % i != 0 && i * 1.0 < sqarta)
    {
        i++;
    }
    if (i * 1.0 > sqarta)
    {
        printf("%d is a prime!\n", a);
    }
    else
    {
        printf("%d is not a prime!\n", a);
    }
    return 0;
}
