#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;

    printf("Input number:\n");
    scanf("%d\n", &num);
    int mult = (num / 100) * ((num % 100) / 10) * (num % 10);
    printf("multiplication = %d\n", mult);
    return 0;
}
