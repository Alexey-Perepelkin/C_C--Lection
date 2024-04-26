#include <stdio.h>
#include "sensor.h"

#define SIZE 30

int main(int argc, char const *argv[])
{

    struct sensor info[SIZE];
    int number = AddInfo(info);
    printer(info, number);
    SortByT(info, number);
    printer(info, number);
    SortByday(info, number);
    printer(info, number);

    return 0;
}
