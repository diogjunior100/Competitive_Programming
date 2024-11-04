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

    vector<ll> numbers;
    ll value;

    for (ll i = 0; i < 4; i++)
    {
        cin >> value;
        numbers.push_back(value);
    }

    ll sum = 0;

    for (int j = 0; j < 4; j++){
        for (int i = j+1; i < 4; i++) {
            if (numbers[j] == numbers[i]) {
                sum++;
            }
        }
    }

    cout << sum << endl;
    

    return 0;
}
