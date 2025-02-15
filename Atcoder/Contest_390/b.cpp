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
    vector<ll> pg(n+1);

    for (int i = 0; i < n; i++)
    {
        cin >> pg[i];
    }

    int count = 0;
    for (int i = 1; i < n - 1; i++) {
		if (pg[i - 1]*pg[i + 1] == pg[i]*pg[i]) {
			count++;
		}
	}

    cout << ((count == n - 2) ? "Yes" : "No") << endl;
    return 0;
}