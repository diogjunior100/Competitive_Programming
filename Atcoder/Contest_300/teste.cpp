#include<bits/stdc++.h>
using namespace std;
#define MAXP 300005
vector<long long> sieve(){
  vector<long long> res;
  vector<int> mem(MAXP,0);
  for(int i=2;i<MAXP;i++){
    if(mem[i]){continue;}
    res.push_back(i);
    for(int j=i;j<MAXP;j+=i){mem[j]=1;}
  }
  return res;
}
int main(){
  vector<long long> p=sieve();
  long long n;
  cin >> n;
  int sz=p.size();
  int res=0;
  for(int i=0;i<sz;i++){
    int k=sz-1;
    for(int j=i+1;j<k && j<sz;j++){
      while(j<k){
        long long v=p[i]*p[i]*p[j]; // <= 10^{18}, won't overflow
        if(v>n){k--;continue;}
        v*=p[k]; // <= 10^{18} because (<= n <= 10^12) * (<= 10^6)
        if(v>n){k--;continue;}
        v*=p[k];
        if(v>n){k--;continue;}
        break;
      }
      res+=(k-j);
    }
  }
  cout << res << "\n";
  return 0;
}