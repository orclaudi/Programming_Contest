#include <bits/stdc++.h>
using namespace std;

int fatorial(int nb)
{
    if (nb == 0 || nb == 1)
        return (1);
    return (nb * fatorial(nb - 1));
}
int main(void)
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    /*vector<int> valores = {9, 2, 4, 3, 8, 1, 0};
    sort(valores.begin(), valores.end());
    for (int i : valores)
    {
        cout << i; 
    }
    */
   int n = 10564;
   int soma = 0;
   int digito;
   while (n > 0)
   {
   // digito = n % 10;
    soma += n % 10;
    n /= 10;
   }
   cout << soma << "\n";
    
    return (0);

}