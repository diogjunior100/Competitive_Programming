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

    stack<int> s; 
    string str;
    ll n;

    cin >> n;
    cin >> str;

    for (auto c : str) {
        if (!s.empty() && s.top() != c){
            s.pop();
        } else {
            s.push(c);
        }
    }

    cout << s.size() << "\n";

    
    return 0;
}