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

    ll n, m;
    cin >> n >> m;

    char s[n*n][n*n], t[m*m][m*m];

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cin >> s[i][j];
        }
        
    }

    for (ll i = 1; i <= m; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> t[i][j];
        }
        
    }
    ll a = 1, b = 1, tempa, tempb;
    for (ll i = 1; i <= m; i++)
    {
        a++;
        for (ll j = 1; j <= m; j++)
        {
            if (s[a+i-1][b+j-1] == t[i][j]){
                tempa = a;
                tempb = b;
            }
            b++;
        }
        a = 1;
        b = 1;
    }
    
    cout << tempa << " " << tempb <<  endl;
    
    return 0;
}