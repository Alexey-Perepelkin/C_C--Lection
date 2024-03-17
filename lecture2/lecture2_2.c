#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, x, y, z;
    a = 27;
    x = a / 5;
    printf("x = %d\n", x);
    y = 11 % 3;  
    printf("y = %d\n", y);
    z = (x + 5) * y;
    printf("z = %d\n", z);

    return 0;
}
