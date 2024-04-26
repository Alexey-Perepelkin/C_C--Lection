#include <stdint.h>

typedef struct sensor
{
    uint8_t day;
    uint8_t month;
    uint16_t year;
    int8_t t;
} sensor;

void SortByT(sensor *info, int n);
void SortByday(sensor *info, int n);
void printer(sensor *info, int number);
int AddInfo(sensor *info);