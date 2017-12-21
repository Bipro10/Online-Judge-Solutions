#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull result[22];
ull factorial(int n) {
    if (n >= 0) {
        result[0] = 1; //initialization
        for (int i=1; i<=n; ++i){
            result[i] = i * result[i-1];
        }
        return result[n];
    }
}

int main(){
    memset(result,0,sizeof(result));
    int x, y;
      while(cin>>x>>y){
          cout<<factorial(x)+factorial(y)<<endl;
      }
    return 0;
}