#include <bits/stdc++.h>

using ll = long long;
const int limit = {100010};
using namespace std;
//using edge = struct {int to; ll cost;};
using ii = pair<int, ll>;
vector<vector<ii>> tree(limit);
ll depth[limit];

void dfs(int v, int p, ll d) {
    depth[v] = d;
    for (auto &e : tree[v]) {
        if (e.first == p) continue;
        dfs(e.first, v, d + e.second);
    }
}

int main(void) {
    int n;
    cin >> n;

    for (int i = 1; i < n -1; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        //a--, b--;
        tree[a].push_back({b, c});
        tree[b].push_back({a, c});
    }

    int q, k;
    cin >> q >> k;
    //k--;

    dfs(k, -1, 0);
    for (int i = 1; i <= q; ++i) {
        int x, y;
        cin >> x >> y;
        //x--, y--;
        cout << depth[x] + depth[y] << endl;
    }

    return 0;
}
