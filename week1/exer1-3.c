#include <stdio.h>

int main(void)
{
    int number, i, divisor_count = 0;

    printf("自然数を入力してください: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            divisor_count++;
        }
    }

    printf("約数の個数: %d\n", divisor_count);
    return 0;
}
