#include <bits/stdc++.h>
using namespace std;
#define lng long long
//#define lng unsigned long long

int main(){
    int n;
    cin>>n;
    while(n--){
        lng a, b, avg;
        cin>>a>>b;
        if(a>b) swap(a,b);
        avg= a+(b-a)/2;
        //avg= (a/2)+(b/2);
        //if(a&1 && b&1) avg++;
        cout<<avg<<endl;
    }
    return 0;
}
