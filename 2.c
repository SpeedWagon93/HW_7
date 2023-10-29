#include <stdio.h>

int main()
{
    int a[]={6,1,-10, 5, 2, -7};
    int size = sizeof(a)/sizeof(int);
    for(int i = 0; i < size; i ++)
    {
        for(int j = size - 1; j > i; j--) 
        {
            if (*((a+j)-1) > *(a+j))
            {
                int x = *((a + j)-1);
                *((a+j)-1) = *(a+j);
                *(a+j) = x;
            }
        }
    }

    for(int x = 0; x < size; x++)
    {
        printf("%d ", *(a + x));
    }
    printf("\n");
}