#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c;
    float B, d;
    float X1, X2;
    setlocale(LC_ALL, "Rus");
    printf("���������� ������ ����������� ���������: \"a*x*x+b*x+c=0\":\n");
    printf("������� a:\n");
    scanf("%f", &a);
    printf("������� b:\n");
    scanf("%f", &b);
    printf("������� c:\n");
    scanf("%f", &c);
    B = b / 2;
    d = sqrt(B * B - a * c);
    printf("����� ����������� ��������� \n");
    X1 = (-B - d) / a;
    printf("X1 =%f\n", X1);
    X2 = (-B + d) / a;
    printf("X2 =%f\n", X2);
    return 0;
}
