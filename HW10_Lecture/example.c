#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SIZE 30

typedef struct sensor
{
    uint8_t day;
    uint8_t month;
    uint16_t year;
    int8_t t;
} sensor;
void AddRecord(sensor *info, int number, uint16_t year, uint8_t month, int8_t day, int8_t t)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].t = t;
}

int AddInfo(sensor *info)
{
    int counter = 0;
    AddRecord(info, counter++, 2021, 9, 16, 9);
    AddRecord(info, counter++, 2022, 9, 16, -5);
    AddRecord(info, counter++, 2021, 1, 7, 9);
    AddRecord(info, counter++, 2021, 9, 30, -20);
    AddRecord(info, counter++, 2021, 4, 46, 9);
    return counter;
}

void printer(sensor *info, int number)
{
    printf("=======================================================\n");
    for (int i = 0; i < number; i++)
    {
        // int num = dayToInt(info + i);

        printf("%04d-%02d-%02d\tt =%3d\n", info[i].year, info[i].month, info[i].day, info[i].t);
    }
}

void changeIJ(sensor *info, int i, int j)
{
    sensor temp = info[i];
    info[i] = info[j];
    info[j] = temp;
}

void SortByT(sensor *info, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (info[i].t >= info[j].t)
                changeIJ(info, i, j);
}
uint32_t dayToInt(sensor *info)
{
    return info->year << 16 | info->month << 8 | info->day;
}
// упорядочивающую его по дате
void SortByday(sensor *info, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (dayToInt(info + i) >= dayToInt(info + j))
            {
               changeIJ(info, i, j);
            }
}

int main(int argc, char const *argv[])
{

    sensor info[SIZE];
    int number = AddInfo(info);
    printer(info, number);
    SortByT(info, number);
    printer(info, number);
    SortByday(info, number);
    printer(info, number);

    return 0;
}
