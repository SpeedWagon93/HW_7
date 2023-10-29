#include <stdio.h>

int main()
{
    float arr[30] = {11.4, 40.6, 12.6, 44, 5, 76, 1, 45, 23.6, 11.7, 5, 12, 12, 13, 15.8, 77, 144, 156, 143.8, 122, 666.1, 24, 55, 55, 21, 34};
    float count = arr[0];
    int index = 0;
    for(int x = 0; x < sizeof(arr)/sizeof(float); x++)
    {
        if(arr[x] > count)
        {
            count = arr[x];
            index = x;
        }
    }
    printf("Индекс массива с максимальным значением: %d\n", index);
    printf("Максимальное значение в массиве: %.3f\n", count);
    return 0;
}