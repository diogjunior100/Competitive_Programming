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

    ll h1, m1, h2, m2;
    char ignoreChar;

    cin >> h1 >> ignoreChar >> m1;
    cin >> h2 >> ignoreChar >> m2;

    ll time_1 = (h1*60) + m1;
    ll time_2 = (h2*60) + m2;

    ll total = (time_1 + time_2) / 2;

    ll final_hour = (total/60);
    ll final_minute = (total)%60;

    if (final_hour >= 10 && final_minute < 10){
        cout << final_hour << ":" << 0 << final_minute << endl;
    }
    else if(final_hour >= 10 && final_minute >= 10){
        cout << final_hour << ":" << final_minute << endl;
    }
    else if (final_hour < 10 && final_minute >= 10){
        cout << 0 << final_hour << ":" << final_minute << endl;
    }
    else{
        cout << 0 << final_hour << ":" << 0 << final_minute << endl;
    }


    return 0;
}