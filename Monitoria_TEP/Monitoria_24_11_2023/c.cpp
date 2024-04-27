#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<vector<ll> > g(MAX);
vector<ll> to_leaf(MAX);
vector<ll> max_length(MAX);

void dfs(ll u, ll p){
    vector<ll> ds;

    for (auto v : g[u])
    {
        if (v == p){
            continue;
        }

        dfs(v,u);
        ds.push_back(to_leaf[v]);
    }
    
    sort(ds.begin(), ds.end());

    to_leaf[u] = ds.empty() ? 0 : ds.back() + 1;

    auto N = ds.size();

    switch (N)
    {
    case 0:
        max_length[u] = 0;
        break;
    
    case 1:
        max_length[u] = ds.back() + 1;
        break;

    default:
        max_length[u] = ds[N -1] + ds[N - 2] + 2;
    }
}

ll diameter(ll root, ll N){
    dfs(root, 0);

    ll d = 0;

    for (auto u = 1; u <= N; ++u)
    {
        d = max(d, max_length[u]);
    }
    return d;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    for (ll i = 0; i < n-1; i++)
    {
        ll a, b;
        cin >> a >> b;

        g[a].push_back(b);
        g[b].push_back(a);

    }
    
    cout << diameter(1, n) << endl;

    return 0;
}
