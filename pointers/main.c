#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 20, *p, *q;
    p = &a;
    q = &b;

    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("A = %d\n", *p);
    printf("B = %d\n", *q);
    printf("Address A = %x\n", &a);
    printf("Address A = %x\n", p);
    printf("Address B = %x\n", &b);
    printf("Address B = %x\n", q);

    return 0;
}
