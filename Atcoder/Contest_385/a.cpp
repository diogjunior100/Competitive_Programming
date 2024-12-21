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

    ll a,b,c;
    cin >> a >> b >> c;

    if(a == b && b == c) {
        cout << "Yes" << endl;
    } else if ((c == (a+b) || a == (b+c) || b == (a+c))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

 
    return 0;
}