#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

const ull oo = {1000000000000000010LL};
const ull MAX = {200010};
const ll MAXP = {300005};

vector<ll> primes2(int N) {
    vector<ll> ps;
    bitset<MAXP> sieve; // MAX deve ser maior do que N
    sieve.set(); // Todos s˜ao "potencialmente" primos
    sieve[1] = false; // 1 n˜ao ´e primo

    for (ll i = 2; i <= N; ++i) {
        if (sieve[i]) { // i ´e primo
        ps.push_back(i);

            for (ll j = 2 * i; j <= N; j += i)
                sieve[j] = false;
        }
    }

    return ps;
}

void solve(ll n) {
    vector<ll> values = primes2(n);
    ll tam = values.size();
    ll res = 0;
    
    for (ll i = 0; i < tam; i++)
    {
        ll k = tam-1;

        for (ll j = i+1; j < k && j < tam; j++)
        {
            while (j < k){
                ll v = values[i]*values[i]*values[j];

                if (v > n){
                    k--;
                    continue;
                }
                v*=values[k];

                if(v>n){
                    k--;
                    continue;
                }
                v*=values[k];

                if(v>n){
                    k--;
                    continue;
                }
                break;
            }
            res += (k-j);
        }
    }
    
    cout << res << endl;
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    solve(n);

    return 0;
}