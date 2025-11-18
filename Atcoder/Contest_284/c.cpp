#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

ll n,m;
vector<vector<ll>> adj(MAX);
bitset<MAX> visited;

void dfs(int u)
{
    if (visited[u])
        return;
    
    visited[u] = true;
    
    for (auto v : adj[u])
        dfs(v);
}

int connected_components(int N)
{
    visited.reset();
    int count = 0;
    for (int u = 1; u <= N; ++u)
    {
        if (not visited[u]){
            ++count;
            dfs(u);
        }
    }
    return count;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (ll i = 0; i < m; i++){
        ll u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << connected_components(n) << endl;


    return 0;
}