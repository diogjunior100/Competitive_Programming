#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

using Point = double[2];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Point p,q {0, 0};
    p = q;

    if(p < q){
        p[0] = q[1];
    }

    return 0;
}