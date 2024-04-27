#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<vector<ii>> adj(MAX);
vector<ll> v(MAX);

void dfs(ll s, ll p, ll d){
    v[s] = d;

    for (auto &e : adj[s]){
        if (e.first == p){
            continue;
        }
        dfs(e.first, s, d + e.second);
    }
}

void solve(){
    ll q, k;
    cin >> q >> k;
    k--;

    dfs(k, -1, 0);

    for (ll i = 0; i < q; ++i)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;

        cout << v[x] + v[y] << endl;
    }
    
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;

    for (ll i = 0; i < n - 1; ++i)
    {
        ll a,b,c;

        cin >> a >> b >> c;
        a--;
        b--;

        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    
    solve();

    return 0;

}
