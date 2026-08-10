#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int P, R; cin >> P >> R;
    if (P == 1 && R == 0)
        cout << "B";
    else if (P == 0)
        cout << "C";
    else 
        cout << "A";
    return (0);
}