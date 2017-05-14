#include <bits/stdc++.h>
using namespace std;

#define lng unsigned long long

int main(){
    int n;
    cin>>n;
    while(n--){
        lng a, b, avg;
        cin>>a>>b;
        avg= (a/2)+(b/2);
        if(a&1 && b&1) avg++;
        cout<<avg<<endl;
    }
    return 0;
}
