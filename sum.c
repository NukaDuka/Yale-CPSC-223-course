#include <stdio.h>
#include <stdlib.h>

int count(int a, int b)
{
    int res = 0;
    for (int i = a; i <= b; i++)
    {
        res += i;
    }
    return res;
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Usage: %s start end\n", argv[0]);
        return 1;
    }

    int start = atoi(argv[1]);
    int end = atoi(argv[2]);
    printf("The sum of all numbers between %d and %d is %d\n", start, end, count(start, end));
    return 0;
}