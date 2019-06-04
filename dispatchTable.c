#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int putchartwice(int c)
{
    if (putchar(c) == EOF || putchar(c) == EOF) return EOF;
    else return c;
}

int main(void)
{
    int (*table[256])(int);
    for (int i = 0; i < 256; i++)
    {
        table[i] = putchar;
    }
    table['a'] = putchartwice;
    table['e'] = putchartwice;
    table['i'] = putchartwice;
    table['o'] = putchartwice;
    table['u'] = putchartwice;
    int c;
    while ((c = getchar()) != EOF)
    {
        //putchar(c);
        table[c](c);
    }
    return 0;
}