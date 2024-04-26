#include <stdio.h>

int is_palindrom(char *str)
{
    int count = 0;
    int a[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
        a[str[i] - 'a']++;

    for (int i = 0; i< 26; ++i)
    {
        if (a[i] % 2 != 0)
            count++;
        if (count > 1)
            return 0;
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    char name_in[] = "input.txt";
    FILE *f_in = fopen(name_in, "r");
    char str[1002];
    fscanf(f_in, "%[^n]", str);
    printf("%s\n", is_palindrom(str) ? "YES" : "NO");
    fclose(f_in);
    return 0;
}
