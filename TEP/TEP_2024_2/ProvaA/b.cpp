#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,m;
    cin >> n >> m;

    vector<string> matrix(n);

    for (int i = 0; i < n; i++)
    {
        cin >> matrix[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 'W')
            {
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
            
        }
        
    }
    
    

    
    return 0;
}