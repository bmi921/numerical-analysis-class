#include <stdio.h>

int main(void)
{
    int n;

    printf("多項式の次数を入力してください: ");
    scanf("%d", &n);

    int a[n + 1]; // 係数配列
    printf("係数を高次から順に入力してください: ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b, y = 0;
    printf("b = ");
    scanf("%d", &b);

    for (int i = 0; i <= n; i++)
    {
        y = y * b + a[i];
    }

    printf("f(%d) = %d\n", b, y);
    return 0;
}
