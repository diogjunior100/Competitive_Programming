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

    ll n;
    cin >> n;

    vector<ll> b (n+1);
    vector<ll> dp (n+1);

    for (ll i = 0; i < n; i++){
        cin >> b[i];
    }

    ll interval = 0;
    ll temp;

    for (ll i = 0; i < n; i++){
        for (ll j = i+1; j < n; j++)
        {
            if (b[i] == b[j]) {
                interval = j - i;
                temp = interval;
            }
        }
        
    }
    
    return 0;
}