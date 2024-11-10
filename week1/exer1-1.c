#include <stdio.h>

int main(void)
{
    unsigned int number;
    int digits = 0;

    printf("非負の整数を入力してください: ");
    scanf("%u", &number);

    // 0の場合、桁数は1とする
    if (number == 0)
    {
        digits = 1;
    }
    else
    {
        while (number > 0)
        {
            number /= 10;
            digits++;
        }
    }

    printf("桁数: %d\n", digits);
    return 0;
}
