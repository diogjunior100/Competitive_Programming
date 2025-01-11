#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

int sum (const string& s){
    return reduce(s.begin(), s.end(), 0, [](int a, int b) {return a + (b - '0'); });
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << sum("12345") << '\n';

    return 0;
}