#include <stdio.h>

extern int Voltage;
int main(int argc, char **argv[])
{
    const float LENGTH = 10.f;
    const int WIDTH = 0xFFU;
    const char NEWLINE = '\n';
    const char STR[] = "value of area : = "
                       "%f";
    float area;
    area = LENGTH * WIDTH;
    printf(STR, area);
    printf("%c", NEWLINE);

    return 0;
}
