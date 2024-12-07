#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

int main() {
    string s;
    ll k, number = 0;

    cin >> s >> k;

    sort(s.begin(), s.end());
  
    do {
        ++number;

        if (number == k) {
            cout << s.c_str() << endl;
            break;
        }

    } while (next_permutation(s.begin(), s.end()));
   

    return 0;
}
