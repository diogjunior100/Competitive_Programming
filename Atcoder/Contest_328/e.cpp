#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
using Edge = pair<ll,ll>;

int n;
vector<vector<int>> adj; 
//const int INF = 1000000000; 
const ll oo = {1000000000000000010LL};

int n;
vector<vector<Edge>> adj;

void prim() {
    int total_weight = 0;
    vector<Edge> min_e(n);
    min_e[0].w = 0;
    set<Edge> q;
    q.insert({0, 0});
    vector<bool> selected(n, false);
    for (int i = 0; i < n; ++i) {
        if (q.empty()) {
            cout << "No MST!" << endl;
            exit(0);
        }

        int v = q.begin()->to;
        selected[v] = true;
        total_weight += q.begin()->w;
        q.erase(q.begin());

        if (min_e[v].to != -1)
            cout << v << " " << min_e[v].to << endl;

        for (Edge e : adj[v]) {
            if (!selected[e.to] && e.w < min_e[e.to].w) {
                q.erase({min_e[e.to].w, e.to});
                min_e[e.to] = {e.w, v};
                q.insert({e.w, e.to});
            }
        }
    }

    cout << total_weight << endl;
}

int main(int argc, char const *argv[])
{
    ll n, m, k;

    cin >> n >> m >> k;

    for (auto i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back(Edge{v, w});
    }
    
    return 0;
}
