#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    float result;
    printf("Input number: ");
    scanf("%d%d%d", &a, &b, &c);
    result = (a + b + c) / 3.f;
    printf("Result = %.2f\n", result);

    return 0;
}
