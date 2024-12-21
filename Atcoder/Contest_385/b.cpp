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

    ll h,w,x,y;
    cin >> h >> w >> x >> y;

    char mtr[h+1][w+1];
    ll house[h+1][w+1];

    string comands;

    for (ll i = 1; i <= h; i++){
        for (ll j = 1; j <= w; j++){
            cin >> mtr[i][j];
            house[i][j] = 0;
        }
    }
    
    cin >> comands;
    ll houses = 0;

    for (ll i = 0; i < comands.size(); i++){
        if (comands[i] == 'U' and mtr[x-1][y] != '#'){
            if (mtr[x-1][y] == '@' and house[x-1][y] == 0){
                houses = houses + 1;
                house[x-1][y] = 1;
            }
            x = x - 1;
        } else if (comands[i] == 'D' and mtr[x+1][y] != '#') {
            if (mtr[x+1][y] == '@' and house[x+1][y] == 0){
                houses = houses + 1;
                house[x+1][y] = 1;
            }
            x = x + 1;
        } else if (comands[i] == 'L' and mtr[x][y-1] != '#') {
            if (mtr[x][y-1] == '@' and house[x][y-1] == 0){
                houses = houses + 1;
                house[x][y-1] = 1;
            }
            y = y - 1;
        } else if (comands[i] == 'R' and mtr[x][y+1] != '#')
        {
            if (mtr[x][y+1] == '@' and house[x][y+1] == 0){
                houses = houses + 1;
                house[x][y+1] = 1;
            }
            y = y + 1;
        }

    }
    
    cout << x << " " << y << " " << houses << endl;


    return 0;
}