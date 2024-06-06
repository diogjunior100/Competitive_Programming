#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

void solution(ll n){
    if (n < 1000){
        cout << n << endl;
    }
    else if(1000 <= n && n<= 9999){
        cout << ((n/10) * 10) << endl;
    }
    else if(10000 <= n && n<= 99999){
        cout << ((n/100) * 100) << endl;
    }
    else if(100000 <= n && n<= 999999){
        cout << ((n/1000) * 1000) << endl;
    }
    else if(1000000 <= n && n<= 9999999){
        cout << ((n/10000) * 10000) << endl;
    }
    else if(10000000 <= n && n<= 99999999){
        cout << ((n/100000) * 100000) << endl;
    }
    else if(100000000 <= n && n<= 999999999){
        cout << ((n/1000000) * 1000000) << endl;
    }
    else if(1000000000 <= n && n<= 9999999999){
        cout << ((n/10000000) * 10000000) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;

    cin >> n;

    solution(n);

    return 0;
}