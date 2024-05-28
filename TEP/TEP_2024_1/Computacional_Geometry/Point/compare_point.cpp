#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

template<typename T>

bool equals (T a, T b){
    constexpr double EPS { 1e-9 };
    return is_floating_point<T>::value ? fabs(a - b) < EPS : a == b;
}

template<typename T>
struct Point
{
    T x = 0, y = 0;

    bool operator==(const Point<T>& p) const noexcept {
        return equals(x, p.x) && equals(y, p.y);
    }

    bool operator!=(const Point<T>& p) const noexcept {
        return not (*this == p);
    }
};


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Point<double> p { 1, 2 }, q { 3*1.0/3, 2 };

    if (p == q){
        p.x = q.y;
    }

    cout << "p = (" << p.x << ", " << p.y << ")\n";

    return 0;
}