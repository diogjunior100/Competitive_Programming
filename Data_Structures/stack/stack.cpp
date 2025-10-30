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

    stack<int, vector <int> > s, t;

    cout << "Empty ? " << s.empty() << '\n';

    for (int i = 1; i <= 10; ++i){
        s.push(2*i);
    }

    s.pop();

    cout << "Top = " << s.top() << "\n";
    cout << "Size = " << s.size() << "\n";
    
    s.swap(t);

    cout << "Size = " << s.size() << '\n';
    cout << "T size = " << t.size() << '\n';
    cout << "T empty? " << t.empty() << '\n';

    return 0;
}