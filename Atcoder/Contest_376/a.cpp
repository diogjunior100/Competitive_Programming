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

    int n, c, value, atual, sum = 0;
    
    cin >> n >> c;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }

    atual = v[0];
    int count = 1;


    while (n != 0)
    {
        if ((v[count] - atual) >= c)
        {
            sum = sum + 1;
            atual = v[count];
        }
        count++;
        n--;
    }
    
    cout << sum + 1 << endl;

    return 0;
}