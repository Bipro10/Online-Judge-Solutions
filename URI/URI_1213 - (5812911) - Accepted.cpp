//Modular arithmetic
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int r=0, c=0;
        do{
            c++;
            r=r*10+1;
            r%=n;
        }
        while(r!=0);
        cout<<c<<endl;
    }
   return 0;
}