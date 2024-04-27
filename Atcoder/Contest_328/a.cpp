#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ll n,x,s, sum = 0;
    cin >> n >> x;

    for (auto i = 0; i < n; i++)
    {
        cin >> s;

        if (s <= x)
        {
            sum = sum + s;
        }
           
    }
    cout << sum << endl;
    return 0;
}
