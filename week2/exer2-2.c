#include <stdio.h>

int main(void)
{
    int number;
    int binary[32];
    int index = 0;

    printf("10進数の整数を入力してください: ");
    scanf("%d", &number);

    // 2進数変換
    while (number > 0)
    {
        binary[index++] = number % 2;
        number /= 2;
    }

    printf("2進数: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
