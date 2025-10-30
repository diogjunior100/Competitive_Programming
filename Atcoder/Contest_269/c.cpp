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
    vector<ll> v = {0};

    for (ll i = 0; i < 60; i++)
    {
        if(n&(1ll<<i)){
            ll tam = v.size();
            for(ll j = 0; j < tam; j++){
                v.push_back(v[j] | (1ll<<i));
            }            
        }
    }
    
    sort(v.begin(), v.end());

    for (auto x : v){
        cout << x << endl;
    }

    return 0;
}