#include <stdio.h>
#include <string.h>

int main(void)
{
    char binary[33];
    int decimal = 0;

    printf("2進数を入力してください: ");
    scanf("%s", binary);

    for (int i = 0; i < strlen(binary); i++)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    printf("10進数: %d\n", decimal);

    return 0;
}
