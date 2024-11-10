#include <stdio.h>

int main(void)
{
    // 答え合わせのため、問題1の与式で試します
    int a[5] = {2, 0, -3, 5, -6}, b, y, i;
    printf("b=");
    scanf("%d", &b);

    y = 0;
    for (i = 0; i <= 5; i++)
    {
        y = y * b + a[i];
    }

    printf("f(%d)=%d\n", b, y);
    return (0);
}