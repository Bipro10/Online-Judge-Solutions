#include <bits/stdc++.h>
using namespace std;

int greatest(int a, int b){
    return (a+b+abs(a-b))/2;
}

int main(){
    int a, b, c, s1;
    cin>>a>>b>>c;
    s1= greatest(greatest(a,b),c);
    cout<<s1<<" eh o maior"<<endl;
   return 0;
}
