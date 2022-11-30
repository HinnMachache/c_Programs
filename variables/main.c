#include <stdio.h>
#include <stdlib.h>

int func_1();
int func_2();


int main()
{
    func_1();
    func_1();
    //printf("a = %d", a);

    return 0;
}

int func_1()
{
    static int a = 10;
    a = a + 10;
    printf("a = %d\n", a);
}

int func_2()
{
    int a = a * 10;
}
