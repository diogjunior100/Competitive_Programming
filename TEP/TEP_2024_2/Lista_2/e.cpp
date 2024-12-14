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

    int n;
    cin >> n;

    vector<ll> a, b, c, vtr(n+1);
    int temp;

    for (int i = 0; i < n; i++){
        cin >> temp;
        temp = temp - 1;
        a.push_back(temp);
    }

    for (int i = 0; i < n; i++){
        cin >> temp;
        temp = temp - 1;
        b.push_back(temp);
    }

    for (int i = 0; i < n; i++){
        cin >> temp;
        temp = temp - 1;
        c.push_back(temp);
    }

    for (int i = 0; i < n; ++i){
    	vtr[b[c[i]]] += 1; 
    }

    ll pairs = 0;
    for (int i = 0; i < n; ++i){
    	pairs += vtr[a[i]];
    }

    cout << pairs << endl;
    

    return 0;
}
