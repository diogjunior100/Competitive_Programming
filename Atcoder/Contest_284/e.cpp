#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

ll n,m;
vector<vector<ll>> adj(MAX);

vector<int> bfs(int s, int N) {
    vector<int> dist(N + 1, oo);
    queue<int> q;
    dist[s] = 0; q.push(s);
    while (not q.empty())
    {
        auto u = q.front(); q.pop();
        // visita/processa u
        for (auto v : adj[u]) {
            if (dist[v] == oo) {
                dist[v] = dist[u] + 1; q.push(v);
            }
        }   
    }
    return dist;
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

    auto dist = bfs(1, n);

    for (ll i = 1; i <= n; ++i) {
        if (dist[i] == oo) cout << -1 << '\n';
        else cout << dist[i] << '\n';
    }

    return 0;
}