#include <stdio.h>


/* Вариант a
int main()
{
    int arr[5][7] = {{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31,32,33,34,35}};

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 7; j++) 
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

int main() 
{
    int arr[5][7];
    int x = 0;

    for (int i = 0; i < 35; i++) 
    {
        arr[i / 7][i % 7] = x;
        x++;
    }

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 7; j++) 
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/* Вариант c
int main()
{
    int x = 0;
    int arr[5][7];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            arr[i][j] = x;
            x++;
        }
    }

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 7; j++) 
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

*/

