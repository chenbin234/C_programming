#include<stdio.h>

int main(void)
{
    int height, length, width, volume;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;

    printf("The value of volume is %d.\n", volume);
    return 0;
}