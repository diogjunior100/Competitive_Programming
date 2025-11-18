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

    ll n;
    cin >> n;

    vector<ll> qs(n+1);
    vector<ll> result(n+1);

    for (ll i=0; i<n; i++){
        cin >> qs[i];
    }

    for (ll i = 0; i < n; i++){

        if (qs[i] == 0){
            result[i] = 0;
        }

        if (qs[i] == -1){
            ll sum = 0, dir = 10001, esq = 10001;
            
            for (ll j = i+1; j < n; ++j){
                sum++;

                if (qs[j] == 0){
                    dir = sum; 
                    break;
                }
            }

            sum = 0;
        
            for (ll j = i-1; j >= 0; j--){
                sum++;
                if (qs[j] == 0){
                    esq = sum;
                    break;
                }
            }
            

            ll dist = min(dir, esq);

            if (dist > 9) dist = 9;
            result[i] = dist;
        }
    }

    for (ll i=0; i<n; i++){
        cout << result[i] << " ";
    }
    
    cout << endl;

    return 0;
}