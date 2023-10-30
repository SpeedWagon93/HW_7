#include <stdio.h>

int main()
{
    int X;
    int num = 0;
    int result = 0;
    char operation = '+';
    
    char arr[100]{};

    scanf("%s", arr);

    
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] >= '0' && arr[i] <= '9')
        {
            num = num*10 + (arr[i] - '0');
            
        }
        else if(arr[i] == '+' || arr[i] == '-')
        {
            if(operation == '+')
            {
                result += num;
            }
            else if(operation == '-')
            {
                result -= num;
            }
            num = 0;
            operation = arr[i];
        }
    }

    if (operation == '+') 
    {
        result += num;
    } else if (operation == '-') 
    {
        result -= num;
    }

    printf("Результат: %d\n", result);
}

