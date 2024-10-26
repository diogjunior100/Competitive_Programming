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

    int n, q, t;
    string h;
    vector<int> ring;

    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        ring.push_back(i);
    }

    int l = ring[0];
    int r = ring[1];

    while (q != 0)
    {
        cin >> h >> t;

        if (h == "r")
        {
            r = ring[t-1];
        }
        
    }
    


    return 0;
}