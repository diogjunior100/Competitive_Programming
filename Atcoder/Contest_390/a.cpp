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

    vector<int> v(5), temp(5), v_temp(5);
    
    for (int i = 0; i < 5; i++){
        cin >> v[i];
        temp[i] = v[i];
        v_temp[i] = v[i];
    }

    sort(v.begin(), v.end());

    int value;
    int result;

    for (int i = 0; i < 4; i++)
    {
        value = temp[i];
        temp[i] = temp[i+1];
        temp[i+1] = value;

        for (int j = 0; j < 5; j++){
            if(temp[j] == v[j]){
                result = 1;
                continue;
            } else {
                result = 0;
                break;
            }
        }

        if (result == 1) {
            cout << "Yes" << endl;
            return 0;
        }   
        
        for (int k = 0; k < 5; k++)
        {
            temp[k] = v_temp[k];
        }
    }
    
    cout << "No" << endl;
    

    return 0;
}