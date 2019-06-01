#include <stdio.h>

#define INVALID_EXPRESSION (-1)

int peekchar(void)
{
    int c = getchar();
    int r = ungetc(c, stdin);
    if (r == EOF) return EOF;
    else return c;
}
int readExpression(void)
{
    int c;
    int e1;
    int e2;
    int o;
    c = peekchar();
    //printf("%d\n", c-'0');
    if (c == '(')
    {
        c = getchar();
        e1 = readExpression();
        o = getchar();
        e2 = readExpression();
        if ((c = getchar()) != ')') return INVALID_EXPRESSION;

        if (o == '+') return e1 + e2;
        else if (o == '*') return e1 * e2;
        else return INVALID_EXPRESSION;
    }

    else if (c >= '0' && c <= '9')
    {
        int s;
        scanf("%d", &s);
        return s;
    }

    else return INVALID_EXPRESSION;

}

int main(void)
{
    printf("%d\n", readExpression());
}