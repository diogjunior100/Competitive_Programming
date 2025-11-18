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
	
    int n, p, temp;
    if (!(cin >> n)) return 0;

    vector<int> xs(n+10);

    for (int i = 1; i <= n; ++i){
    	cin >> xs[i];
    }

    cin >> p;
    int sum = 0;

	
    for (int i = 0; i < p; i++){
    	cin >> temp;

        if (xs[temp] > 0) {
            xs[temp]--;
            sum++;
        }
    }
    
    cout << sum << "\n";
    

    return 0;
}

