#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

void SieveOfEratosthenes(ll n, bool prime[], 
						bool primesquare[], ll a[]) 
{ 
	for (ll i = 2; i <= n; i++) 
		prime[i] = true; 

	for (ll i = 0; i <= (n * n + 1); i++) 
		primesquare[i] = false; 

	prime[1] = false; 

	for (ll p = 2; p * p <= n; p++) { 
		if (prime[p] == true) { 
			for (ll i = p * p; i <= n; i += p) 
				prime[i] = false; 
		} 
	} 

	ll j = 0; 
	for (ll p = 2; p <= n; p++) { 
		if (prime[p]) { 
			a[j] = p; 
			primesquare[p * p] = true; 
			j++; 
		} 
	} 
} 

ll countDivisors(ll n) 
{ 
	if (n == 1) 
		return 1; 

	bool prime[n + 1], primesquare[n * n + 1]; 

	ll a[n]; 
	SieveOfEratosthenes(n, prime, primesquare, a); 
	ll ans = 1; 

	for (ll i = 0;; i++) { 
		if (a[i] * a[i] * a[i] > n) 
			break; 

		ll cnt = 1; 
		while (n % a[i] == 0)
		{ 
			n = n / a[i]; 
			cnt = cnt + 1; 
		} 
		ans = ans * cnt; 
	} 

	if (prime[n]) 
		ans = ans * 2; 
	else if (primesquare[n]) 
		ans = ans * 3; 
	else if (n != 1) 
		ans = ans * 4; 

	return ans; 
} 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    ll sum = 0;

    for (ll i = 1; i <= n; i++)
    {
        if (countDivisors(i) == 9) {
            sum = sum + 1;
        }
    }
    
    cout << sum << endl;

    return 0;
}