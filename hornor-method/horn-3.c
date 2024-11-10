#include <stdio.h>

int main(void)
{
    int a[5] = {2, -3, 4, 5, -6}; // 係数
    double x, y;

    for (x = 1.0; x <= 2.0; x += 0.1)
    {
        y = 0.0;
        for (int i = 0; i < 5; i++)
        {
            y = y * x + a[i];
        }
        printf("f(%.1f) = %.2f\n", x, y);
    }

    return 0;
}
