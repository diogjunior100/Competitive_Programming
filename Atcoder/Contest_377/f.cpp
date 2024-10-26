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

    ll n, k;

    cin >> n >> k;
    
    ll p[n+1], vtr[n+1];


    for (ll a = 1; a <= n; a++)
    {
        cin >> p[a];
    }
    

    for (ll j = 0; j < k; j++)
    {

        for (ll i = 1; i <= n; i++)
        {
            ll temp = p[p[i]];
            vtr[i] = temp;
        }

        for (ll i = 1; i <= n; i++)
        {
            p[i] = vtr[i];
        }
        
    }
    
    for (ll i = 1; i <= n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    
    return 0;
}