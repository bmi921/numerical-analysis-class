#include <stdio.h>
#include <math.h>

double f(double x)
{
    return (x * x * x - 3 * x - 1);
}

int main(void)
{
    double a, b, c, eps = 0.0001;
    printf("a,b=");
    scanf("%lf%lf", &a, &b);

    if (f(a) * f(b) >= 0) // 異符号でなければエラーメッセージを表示
    {
        printf("The function has the same sign at both endpoints. Please enter a different interval.\n");
        return 1;
    }
    do
    {
        c = (a + b) / 2;
        if (f(c) == 0)
            break;
        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

    } while (fabs(a - b) > eps);

    printf("Answer=%f\n", c);

    return (0);
}