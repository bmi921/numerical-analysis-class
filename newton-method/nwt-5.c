// コンパイルのとき、math.hのために、コマンド-lmを付けること！
#include <stdio.h>
#include <math.h>
#define MAX 20

int main(void)
{
    int i;
    double x0, x1, fx0, dfx0, eps = 0.0001;

    printf("x0=");
    scanf("%lf", &x0);

    for (i = 1; i < MAX; i++)
    {
        fx0 = x0 - cos(x0);
        dfx0 = 1 + sin(x0);

        if (dfx0 == 0)
        {
            printf("dfx0が0になって除法ができず、errorになりました。他のx0で試して！\n");
            return 1;
        }
        x1 = x0 - fx0 / dfx0;

        if (fabs(x1 - x0) < eps)
            break;
        else
            x0 = x1;
    }

    printf("x=%f\n", x1);
    return (0);
}