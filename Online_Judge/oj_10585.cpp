#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

struct Point
{
    ll x = 0, y = 0;

    bool operator <(const Point &p) const {
        return x == p.x ? y < p.y : x < p.x;
    }
};

bool result (const set<Point>& S){
    auto A = *S.begin();
    auto B = *S.rbegin();

    auto _2s = Point { A.x + B.x, A.y + B.y };

    for (auto& p: S){
        auto q = Point { _2s.x - p.x, _2s.y - p.y};

        if(S.count(q) == 0){
            return false;
        }
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll c,n;

    cin >> c;

    while (c != 0){
        cin >> n;

        set<Point> S;

        while (n != 0){
            ll x, y;

            cin >> x >> y;

            S.insert(Point {x, y});

            n--;
        }

        cout << (result(S) ? "yes" : "no") << endl;
        
        c--;
    }
    

    return 0;
}