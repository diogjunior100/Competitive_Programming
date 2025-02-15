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

    string s;
    cin >> s;

    if (s == "N") 
    {
        cout << "S" << endl;
    } else if (s == "E") {
        cout << "W" << endl;
    } else if (s == "NW") {
        cout << "SE" << endl;
    } else if (s == "NE") {
        cout << "SW" << endl;
    } else if (s == "S") {
        cout << "N" << endl;
    } else if (s == "W") {
        cout << "E" << endl;
    } else if (s == "SE"){
        cout << "NW" << endl;
    } else if (s == "SW") {
        cout << "NE" << endl;
    }
    

    return 0;
}