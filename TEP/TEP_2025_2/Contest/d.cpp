#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

void range_phi (int n){
    bitset<MAX> sieve;
    vector<int> phi(n + 1);

    iota(phi. begin(), phi. end(), 0);
    sieve.set();

    for (int p = 2; p <=n; p += 2)
        phi[p] /= 2;

    for (int p = 3; p <=n; p +=2) {
        if (sieve[p]) {
            for (int j = p; j <= n; j += p) {
                sieve[j] = false;
                phi[j] /= p;
                phi[j] *= (p - 1);
            }
        }
    }

    for (int i = 0; i < phi.size(); i++) {
        cout << phi[i] << endl;
    }
}

long long sum_of_divisors (long long n) {
    ll res;

    for (ll d = 1; d * d <= n; ++d){
        if (n % d == 0) {
            ll k = n / d;
            res += (d == k ? d : d + k);
        }
    }
    
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,a,b;
    cin >> n >> a >> b;
    
    vector<ll> as(n+1);

    cout << sum_of_divisors(n) << endl;

    range_phi(n);

    return 0;
}