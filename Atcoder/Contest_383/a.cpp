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

	vector<int> t(n+1);
	vector<int> v(n+1);
	
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> v[i];
	}

	int litros = v[0];
	int i = 0;

	while (i < n-1) {
        int sub = t[i+1] - t[i];
		int temp = litros - sub;

		if (temp <= 0){
			litros = 0;
		} else {
			litros = temp;
		}

		i++;
		litros = litros + v[i];
    }

	cout << litros << endl;
    return 0;
}

