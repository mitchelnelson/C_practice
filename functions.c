#include <stdio.h>

int add_1(int num)
{
    return num + 1;
}

int main(void)
{
    int num_1 = 10;
    int num_2;

    num_2 = add_1(num_1);
    printf("New number is %d\n", num_2);
}