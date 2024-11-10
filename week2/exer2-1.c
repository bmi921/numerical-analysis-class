#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x;
    bool is_prime = true;

    printf("2以上の自然数を入力してください: ");
    scanf("%d", &x);

    if (x < 2)
    {
        printf("2以上の自然数を入力してください。\n");
        return 1;
    }

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        printf("%dは素数です。\n", x);
    }
    else
    {
        printf("%dは素数ではありません。\n", x);
    }

    return 0;
}
