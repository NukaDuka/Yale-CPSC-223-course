#include <stdio.h>
#include <stdlib.h>

int g = 0;

int main(void)
{
    int a = 2;
    int x = 10;
    printf("%x\n", *(&a + 1));
    static int b = 0;
    int *p;
    p = malloc(sizeof(int));
    int ar1[2];
    int **ar2 = (int **) malloc(2 * sizeof(int *));
    ar2[0] = (int *) malloc(sizeof(int));
    ar2[1] = (int *) malloc(sizeof(int));

    printf("g: %p\n", (void *) &g);
    printf("a: %p\n", (void *) &a);
    printf("x: %p\n", (void *) &x);
    printf("b: %p\n", (void *) &b);
    printf("p: %p\n", (void *) &p);
    printf("*p: %p\n", (void *) p);
    printf("ar1: %p\n", (void *) &ar1);
    printf("ar1[0]: %p\n", (void *) &ar1[0]);
    printf("ar1[1]: %p\n", (void *) &ar1[1]);
    printf("ar2: %p\n", (void *) &ar2);
    printf("ar2[0]: %p\n", (void *) &ar2[0]);
    printf("ar2[1]: %p\n", (void *) &ar2[1]);

    free(ar2[0]);
    free(ar2[1]);
    free(ar2);
    free(p);
}