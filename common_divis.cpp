#include <bits/stdc++.h>
using namespace std;

long long fatorial (int n)
{
    if (n == 0)
        return (1);
    if (n < 0)
        return (-1);
    return ((n) * fatorial(n - 1));
}

int main(void)
{
    /*int  n; cin >> n;
    int soma = 1;
    for (int i = 1; i <= n; i++)
    {
        soma *= i;
    }
    cout << soma << "\n";
    */
    cout << fatorial (100) << '\n';
    return (0);
}