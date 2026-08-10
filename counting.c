#include <stdio.h>

int main(void)
{
    int n;
    int soma = 0;
    scanf("%d", &n);
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
            if (i != n / i)
                soma += n / i;
        }
    }
    printf("%d\n", soma);
    return (0);
}