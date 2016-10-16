#include<bits/stdc++.h>
using namespace std;
#define i64 long long

i64 primeFactors(i64 n){
    i64 mx=0;
    while(n%2==0){ //take care of even composite number
        mx=2;;
        n/=2;
    }
    for(i64 i=3;i*i<=n;i+=2){ //take care of odd composite number
        while(n%i==0){
            mx= max(mx, i);
            n/=i;
        }
    }
    if(n>2) //take care of prime number (n!=1)
        mx=n;
    return mx;
}

int main(){
    const i64 n= 600851475143;
    i64 ans= primeFactors(n);
    cout<<ans;
}
