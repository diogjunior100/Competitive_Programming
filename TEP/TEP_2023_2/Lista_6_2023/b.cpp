#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<vector<ll>> adj;
vector<ll> root (MAX);

void dfs(ll u, ll p, vector<ll>& tl){
    for (auto v : adj[u])
    {
        if (v == p)
        {
            continue;
        }   
        
        dfs(v, u, tl);
        tl[u] = max(tl[u], 1 + tl[v]);  // Update the depth of u based on the depth of its children
    }
}

vector<ll> solve(ll u, ll n){
    vector<ll> tl(n+1, 0);

    dfs(u, 0, tl);

    return tl;
}

int main()
{
    ll n;

    cin >> n;

    adj.resize(n + 1);

    for (ll i = 1; i <= n; ++i) {
        ll aux;
        cin >> aux;

        if (aux != -1) {
            adj[aux].push_back(i);  
        } else {
            root.push_back(i);  
        }
    }

    ll result = 0;

    for (ll r : root) {
        vector<ll> tl = solve(r, n);
        result = max(result, *max_element(tl.begin(), tl.end()));
    }

    cout << result + 1 << endl;  
    
    return 0;
}
