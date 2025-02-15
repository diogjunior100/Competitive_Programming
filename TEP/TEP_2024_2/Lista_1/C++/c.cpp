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

    string temp = s;

    while (s != "#")
    {
        sort(s.begin(), s.end());
        int number = 0;

        do{
            ++number;
            if (s.c_str() == temp){
                break;
            }
            
        } while (next_permutation(s.begin(), s.end()));
    
        //cout << number << endl;

        cin >> s;
        temp = s;
    }
    

    return 0;
}
