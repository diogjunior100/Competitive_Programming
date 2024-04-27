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

    ll a, b, c;

    cin >> a >> b >> c;

    if (c == 0 && a > b)
    {
        cout << "Takahashi" << endl;
    }else if (c == 0 && b > a){
        cout << "Aoki" << endl;
    }
    else if (c == 1 && a >= b){
        cout << "Takahashi" << endl;
    }
    else{
        cout << "Aoki" << endl;
    }

    return 0;
}