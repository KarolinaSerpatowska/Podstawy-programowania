#include <stdio.h>

int main()
{
    int x,y,z;
    double wynik;

    scanf("%d %d %d", &x, &y, &z);
    wynik=3.0/((1.0/x)+(1.0/y)+(1.0/z));
    printf("%f", wynik);


    return 0;
}
