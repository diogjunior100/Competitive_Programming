#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<vector<ii>> adj;

ll prim(ll n, const vector<vector<ii>>& adj) {
    set<ll> C;
    C.emplace(0);
    priority_queue<ii, vector<ii>, greater<ii>> pq;

    for (auto [v, w] : adj[0])
        pq.emplace(w, v);

    ll mst = 0;

    while ((C.size() < n) and !pq.empty()) {
        ll v, w;

        do {
            tie(w, v) = pq.top();
            pq.pop();
        } while (C.count(v) && !pq.empty());

        mst += w;
        C.emplace(v);

        for (auto [s, p] : adj[v])
            if(not C.count(s))
                pq.emplace(p, s);
    }
    return (C.size() == n ? mst : -1);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;

    adj.resize(n+1);

    for (ll i = 0; i < m; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		a--;
		b--;
		adj[a].push_back({b, c});
		adj[b].push_back({a, c});
	}

    ll ans = prim(n, adj);

    if (ans == -1) {
		cout << "IMPOSSIBLE" << endl;
	} 
    else {
		cout << ans << endl;
	}

    return 0;
}