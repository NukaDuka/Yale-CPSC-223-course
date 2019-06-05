#include <stdio.h>
#include <stdlib.h>


size_t strlen(const char *a)
{
    size_t ret = 0;
    while (*a++) ret++;
    return ret;
}

char *strcatAlloc(const char *a, const char *b)
{
    size_t cta = strlen(a);
    size_t ctb = strlen(b);
    size_t length = cta + ctb;
    char *ret = (char *) malloc(length * sizeof(char));
    if (ret == 0) return ret;
    int index = 0;
    while (*a) ret[index++] = *a++;
    index--;
    while (*b) ret[index++] = *b++;
    ret[index] = 0;
    return ret;
}

int main(void)
{
    char *inp1 = (char *) malloc(sizeof(char) * 1000);
    char *inp2 = (char *) malloc(sizeof(char) * 1000);
    int c;
    int index = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        inp1[index++] = c;
    }
    inp1[index] = 0;
    index = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        inp2[index++] = c;
    }
    inp2[index] = 0;
    puts(inp1);
    puts(inp2);
    char *ret = strcatAlloc(inp1, inp2);
    puts(ret);
    putchar('\n');
    free(ret);
    free(inp1);
    free(inp2);
}