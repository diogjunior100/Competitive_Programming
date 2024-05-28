#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

using Point2D = pair<ll, ll>;
using Point3D = tuple<ll, ll, ll>;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Point3D p {1,2,3}, q;

    if(p == q){
        auto [x, y, z] = q;
        auto w = x*x + y*y + z*z;
    }

    return 0;
}