#include <stdio.h>

int main(void)
{
    int number, i, count = 0;

    printf("1000以下の自然数を入力してください: ");
    scanf("%d", &number);

    printf("約数: ");
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
            count++;
            // 約数を5個表示するごとに改行
            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
    }

    // 最後に改行
    if (count % 5 != 0)
    {
        printf("\n");
    }

    return 0;
}
