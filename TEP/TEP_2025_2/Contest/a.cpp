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

    vector<ll> n;
    ll temp;

    for (int i = 0; i < 3; i++){
        cin >> temp;
        n.emplace_back(temp);
    }

    ll value = n[1];
    sort(n.begin(), n.end());

    if (value == n[1]){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }



    return 0;
}