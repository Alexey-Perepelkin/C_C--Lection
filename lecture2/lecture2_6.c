#include <stdio.h>
int main(int argc, char const *argv[])
{
    float f = 123.567;
    scanf("%f", &f);
    int k, fint;
    fint = f;   // 123
    fint *= 10; // 1230
    f *= 10;
    k=f-fint;
    printf("%d",k);
    return 0;
}
