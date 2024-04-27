#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<vector<ll>> adj(MAX);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, q;
    cin >> n >> q;

    for (auto i = 1; i <= n; i++)
    {
        ll aux;
        cin >> aux;

        adj[i].push_back(aux);
    }
    
    

    return 0;
}