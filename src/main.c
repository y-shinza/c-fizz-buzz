#include <stdio.h>

void main()
{
    int i, count;

    printf("�J��Ԃ��񐔂���͂��ĉ������B\n");
    scanf("%d", &count);
    
    for (i = 1; i <= count; i++)
    {
        if (i % 15 == 0)
            printf("FizzBuzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
}