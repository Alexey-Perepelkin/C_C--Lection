#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x=1234;
    printf("%d\n",x);
    printf("%9d\n",x);
    printf("%#09d\n",x);
    printf("%#09x\n",x);
    printf("%#09x\n",x);
    return 0;
}
