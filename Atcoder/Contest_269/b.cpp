#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<string> s(11);

    for (ll i = 0; i < 10; i++)
    {
        cin >> s[i];
    }

    ll a = 1e9, b = -1e9, c = 1e9, d = -1e9;

    for (ll i = 0; i < 10; i++)
    {
        for (ll j = 0; j < 10; j++)
        {
            if (s[i][j] == '#'){
                a = min(a, i + 1);
                b = max(b, i + 1);
                c = min(c, j + 1);
                d = max(c, j + 1);
            }
        }
        
    }

    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    
    
    

    return 0;
}